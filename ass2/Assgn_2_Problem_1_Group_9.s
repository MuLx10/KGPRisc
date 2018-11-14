 ##################################################
 # Mehul Kumar Nirala  16CS10034				  #
 # Chelsi Raheja       16CS10013				  #
 # Assignment: 2(a)								  # 
 ##################################################
##########Data Segment########################
.data
array:
	.space 32
input_msg:
	.asciiz "This program finds an element in sorted array. \nEnter 8 integers in an ascending order:-\n"
input_msg2:
	.asciiz "Enter integer to be searched: "
order_err_msg:
	.asciiz "Integers not in ascending order! Program ended."
found_msg:
	.asciiz "Element found at index(may not be unique) = "
not_present_error:
	.asciiz "Number is not present in array."
###########Code Segment#######################
	.text
	.globl main

main:
	li $v0, 4                             #code for printing string is 4
	la $a0, input_msg                     #load address of string to be printed into $a0
	syscall                               #call operating system to perform print operation

	la $s1, array                         #naming a reg as the starting of the array

	jal form_array                        #Inserting lements in array using form_array label
	jal check_ascending_array             #checking ascending order of array
	
	li $v0, 4                             #code for printing string is 4
	la $a0, input_msg2                    #load address of string to be printed into $a0
	syscall                               #call operating system to perform print operation

	li $v0, 5                             #giving instruction to take input
	syscall                               #call operating system to perform read operation
	move $s0, $v0                         #saving the input number in s0
	
	jal bin_search                        #performing binary search
	beq $v0, -1, unavailable                     #if the index of the search is -1, i.e., not found; go to the miss part
	move $s2, $v0                         #move the value of v0 to s2
	
	li $v0, 4                             #giving instruction to print
	la $a0, found_msg                     #printing the message for output 
	syscall                               #call operating system to perform print operation
	li $v0, 1                             #giving instruction to print integer
	move $a0, $s2                         #moving value in s2 to arguument register 
	syscall                               #call operating system to perform print operation
	
	j exit                                #jump to exit

	unavailable:                                 #block of the code about "not found"
		li $v0, 4                           #giving instruction to print
		la $a0, not_present_error                   #printing the message for error
		syscall                             #software interruption

		j exit                              #exit block

form_array:                             #forming array from input
	addi $sp, $sp, -4                     #subtracting 4 froms the stack pointer
	sw $s1, 0($sp)                        #storing words in reg s1
	
	li $t0, 0                             #loading 0 in temp reg t0
	li $t2, 8                             #loading 8 in temp reg t1
	
	iploop:                               #this is the loop to take in input
		li $v0, 5                           #passing instructions to take input integer
		syscall                             #software interruption
		move $t1, $v0                       #moving the input value to temp reg t1
		sw $t1, 0($s1)                      #storing teh integer taken from t1 to s1 with 0 offset

		addi $t0, $t0, 1                    #adding 1 to whatever is stored in t0
		addi $s1, $s1, 4                    #adding 4 to whatever is stored in s1
		bgt $t2, $t0, iploop                #if t2>t0 do the loop again

	lw $s1, 0($sp)                        #loading word in s1 into 0 offset on stack pointer
	addi $sp, $sp, 4                      #adding  to the stack pointer
	jr $ra                                #returning return address

check_ascending_array:                    #checking the ascending order
	addi $sp, $sp, -4                     #s1:subtracting 4 from the stack pointer
	sw $s1, 0($sp)                        #s2:storing word from s1 into 0 offset on stack pointer

	li $t0, 0                             #load integer value 0 as index into t0
	li $t3, 7                             #load integer value 7 as index into t3
	ascloop:                              #for ascending loop check
		lw $t1, 0($s1)                      #loading word in temp reg t1 from 0 offset from s1
		lw $t2, 4($s1)                      #loading word in temp reg t2 from 4 offset from s1
		bgt $t1, $t2, desc                  #if t1>t2 that means it's wrong therefore to desc (error message)
		
		addi $t0, $t0, 1                    #adding 1 to to value in t0
		addi $s1, $s1, 4		    		#moving to next element
		bgt $t3, $t0, ascloop               #starting checking loop again (ascloop) if t3>t0

	lw $s1, 0($sp)                        #reverts2:loading word in s1 into 0 offset on stack pointer
	addi $sp, $sp, 4                      #reverts1:adding 4 to the stack pointer
	jr $ra                                #back to main

	desc:                                
		li $v0, 4                           #giving instruction to print
		la $a0, order_err_msg                #descending order error message
		syscall                             #call to print
		j exit                              #go to exit

bin_search:                             
	addi $sp, $sp, -4                     #s1:subtracting 4 from the stack pointer
	sw $s0, 0($sp)                        #s2:storing word from s0 into 0 offset on stack pointer
	addi $sp, $sp, -4                     #s3:subtracting 4 from the stack pointer
	sw $s1, 0($sp)                        #s4:storing word from s1 into 0 offset on stack pointer
	
	li $t1, 0                             #loading first index 0 into t1
	li $t2, 7                             #loading last index 7 into t2
	while:
		move $t0, $s1                       #t0<--s1 starting of array
		add $t3, $t1, $t2                   #t3<--t1+t2
		div $t3, $t3, 2                     #t3<--t3/2 t3 stores mid index
		mulo $t4, $t3, 4                    #t4<--t3*4  t4 has size*mid
		add $t0, $t0, $t4                   #t0<--t0+t4 
		lw $t0, 0($t0)                      #loading word in t0 into 0 offset on reg t0
		beq $t0, $s0, found                 #printing found message if t0==s0
		bgt $t0, $s0, small                 #going to the small loop if t0>s0
		large:                              #larger side of the array
			addi $t1, $t3, 1                  #adding integer 1 to t3 and storing it into t1
			bge $t2, $t1, while               #go back to while loop if t2>=t1
		small:                              #smaller side of the array
			addi $t2, $t3, -1                 #adding integer -1 to t3 and storing it into t2
			bge $t2, $t1, while               #go back to while loop if t2>=t1
	li $v0, -1                            #loading -1 immediately into the register v0
	beq $v0, $v0, return                  #if v0=v0 then we go to the return block
	found:                                #if we found the number
		move $v0, $t3
	return:
		lw $s1, 0($sp)                      #reverts4:loading word in s1 into 0 offset on stack pointer
		addi $sp, $sp, 4                    #reverts3:adding 4 to the stack pointer
		lw $s0, 0($sp)                      #reverts2:loading word in s0 into 0 offset on stack pointer
		addi $sp, $sp, 4                    #reverts1:adding 4 to the stack pointer
		jr $ra                              #back to main

exit:                                   #exit block
	li $v0, 10                            #loading exit command
	syscall                               #software interruption
