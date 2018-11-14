 ##################################################
 # Mehul Kumar Nirala  16CS10034				  #
 # Chelsi Raheja       16CS10013				  #
 # Assignment: 2(c)					 #			  # 
 ##################################################
##########Data Segment########################
.data
array:
    .space 32
tmp:
    .space 32
input_msg:
    .asciiz "Enter 8 numbers:\n"
outputmsg:
    .asciiz "The sorted numbers are:"
space_bar:
    .asciiz " "
###########Text Segment#######################
    .text
    .globl main

main:               #main function
    li $v0, 4           #setting mode as print_str
    la $a0, input_msg       #setting arg as input prompt
    syscall             #printing input prompt

    la $s0, array           #declaring array pointer
    li $s1, 0           #declaring lower bound=0
    li $s2, 8           #declaring upper-bound=8 (non-inclusive)

    jal form_array          #calling function for taking input
    jal merge_sort          #calling function for sorting array [l,u)
    
    li $v0, 4           #setting mode as print_str
    la $a0, outputmsg       #setting arg as output prompt
    syscall             #printing output prompt
    
    move $t0, $s0           #initializing loop pointer
    move $t1, $s1           #initializing loop iterator

    printloop:          #loop for printing numbers
    li $v0, 1           #setting mode as print_int
    lw $a0, 0($t0)          #setting arg from memory location/pointer
    syscall             #printing number at from pointer's location

    li $v0, 4           #setting mode as print_str
    la $a0, space_bar       #setting arg as whitespace
    syscall             #printing a space after the number
    
    addi $t0, $t0, 4        #moving the pointer 1 word ahead
    addi $t1, $t1, 1        #loop iterator++
    blt $t1, $s2, printloop     #if loop iterator<array size, keep moving in loop
    
    j exit              #END of program
    
form_array:         #array input function
    addi $sp, $sp, -4       #allocating space for 1 word on stackframe
    sw $s0, 0($sp)          #saving array pointer in stackframe
    
    li $t0, 0           #initializing loop iterator
    li $t2, 8           #initializing loop limit
    
    iploop:             #loop for inputting numbers
        li $v0, 5       #setting mode as read_int
        syscall         #taking integer as input
        sw $v0, 0($s0)      #saving input number in memory at pointer location

        addi $t0, $t0, 1    #loop iterator++
        addi $s0, $s0, 4    #moving array pointer 1 word ahead
        bgt $t2, $t0, iploop    #if iterator < limit, continue loop

    lw $s0, 0($sp)          #retrieving original array pointer from memory
    addi $sp, $sp, 4        #freeing space on stackframe
    jr $ra              #returning to function call
    
merge_sort:         #sorting function
    addi $sp, $sp, -16      #allocating space for 4 words on stackframe
    sw $s0, 0($sp)          #saving array pointer on stackframe
    sw $s1, 4($sp)          #saving lower index (l) on stackframe
    sw $s2, 8($sp)          #saving upper index (u) on stackframe
    sw $ra, 12($sp)         #saving return address on stackframe(needed for recursive function)
    
    addi $t0, $s1, 1        #getting l+1
    bge $t0, $s2, returncase    #if l+1==u ,i.e, one element array, end function and return

    add $t0, $s1, $s2       #l+u
    div $t0, $t0, 2         #m = (l+u)/2
    
    move $s2, $t0           #setting upper index as m
    jal merge_sort          #sorting [l,m)
    lw $s2, 8($sp)          #retrieving older upper index(u) from stackframe
    
    move $s1, $t0           #setting lower index as m
    jal merge_sort          #sorting [m, u)
    lw $s1, 4($sp)          #retrieving older lower index(l) from stackframe
    
    jal merge           #merging sorted sub arrays

    returncase:         #returning; declared label here for allowing access to basecase as well
    lw $ra, 12($sp)         #retrieving return address from stackframe
    lw $s2, 8($sp)          #retrieving u from stackframe
    lw $s1, 4($sp)          #retrieving l from stackframe
    lw $s0, 0($sp)          #retrieving array pointer from stackframe
    addi $sp, $sp, 16       #freeing up used space
    jr $ra              #returning to function call

merge:              #merging two sorted subarrays
    addi $sp, $sp, -16      #getting space on stack to save parameters
    sw $s0, 0($sp)          #saving pointer to array
    sw $s1, 4($sp)          #saving lower index (l)
    sw $s2, 8($sp)          #saving upper index (u)
    sw $ra, 12($sp)         #saving return address of function call

    add $t0, $s1, $s2       #l+u
    div $t0, $t0, 2         #m=(l+u)/2
    
    la $t1, tmp         #iterator for tmp array (a[k])
    move $t2, $s1           #iterator for left portion (i)
    move $t3, $t0           #iterator for right portion (j)
    
    loopcompare:            #the while loop which fills up the temp array
    beq $t2, $t0, dorightonly   #if left iterator==limit, fill up all from right subarray
    beq $t3, $s2, doleftonly    #if so for right, fill up all from left subarray
    
    mulo $t4, $t2, 4        #4i=i words
    add $t4, $t4, $s0       #moving array pointer i words ahead (a[i])
    lw $t4, 0($t4)          #getting value of a[i]
    
    mulo $t5, $t3, 4        #4j
    add $t5, $t5, $s0       #a[j]
    lw $t5, 0($t5)          #getting value of a[j]
    
    bge $t4, $t5, righty        #if a[i]>=a[j], put a[j] in first
    
    lefty:              #else
    sw $t4, 0($t1)          #save a[i] first
    addi $t2, $t2, 1        #i++
    addi $t1, $t1, 4        #moving tmp's pointer 1 word up
    b loopcompare           #moving to next iteration of loop
    
    righty:             #inserting a[j]
    sw $t5, 0($t1)          #a[j] first
    addi $t3, $t3, 1        #j++
    addi $t1, $t1, 4        #moving tmp's pointer 1 word up
    b loopcompare           #mving to next iteration of loop
    
    doleftonly:         #if right subarray is full
    beq $t2, $t0, editarray     #check if left one is full or not
    sw $t4, 0($t1)          #if not, save a[i]
    addi $t2, $t2, 1        #i++
    addi $t1, $t1, 4        #moving tmp's pointer 1 word ahead
    mulo $t4, $t2, 4        #4i' (new i is being used)
    add $t4, $t4, $s0       #getting new a[i] 
    lw $t4, 0($t4)          #saving value of a[i]
    b doleftonly            #repeat loop
    
    dorightonly:            #if left subarray is full
    beq $t3, $s2, editarray     #check whether right is full or not
    sw $t5, 0($t1)          #if not, save a[j]
    addi $t3, $t3, 1        #j++
    addi $t1, $t1, 4        #moving tmp pointer 1 up
    mulo $t5, $t3, 4        #4j' (new j here)
    add $t5, $t5, $s0       #getting new a[j]
    lw $t5, 0($t5)          #saving a[j] to add
    b dorightonly           #repeat loop

    editarray:          #now thatwe know tmp is full (only reached here if right & left subarrays are full)
    move $t0, $s1           #initialzing t0=l
    mulo $t1, $t0, 4        #4l
    add $t1, $s0, $t1       #initializing t1 as array[l]
    la $t2, tmp         #initializing t2 as tmp[0]
    editloop:           #loop for shifting numbers from tmp to array
    lw $t3, 0($t2)          #get word from tmp
    sw $t3, 0($t1)          #save word in array
    addi $t0, $t0, 1        #t0++ (loop iterator)
    addi $t1, $t1, 4        #moving t1 ahead
    addi $t2, $t2, 4        #moving t2 ahead as well
    blt $t0, $s2, editloop      #if t0 < limit, continue copying 

    lw $ra, 12($sp)         #retrieving return address of function call
    lw $s2, 8($sp)          #retrieving upper index (non-inclusive)
    lw $s1, 4($sp)          #retrieving lower index (inclusive)
    lw $s0, 0($sp)          #retrieving pointer to array
    addi $sp, $sp, 16       #freeing space on stack to save parameters
    jr $ra              #return to location of function call

exit:               #exit funtion
    li $v0, 10          #setting mode as exit
    syscall             #exiting the program
