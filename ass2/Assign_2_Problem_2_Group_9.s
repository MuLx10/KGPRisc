 ##################################################
 # Mehul Kumar Nirala  16CS10034				  #
 # Chelsi Raheja       16CS10013				  #
 # Assignment: 2(b)								  # 
 ##################################################
.data
array:
	.space 32
input_msg:
	.asciiz "Enter 2 positive integers:\n"
error_msg:
	.asciiz "Integers are either negative or zero."
found_msg:
	.asciiz "GCD of two numbers is = "

###########Text Segment#######################
	.text
	.globl main

main:
	li $v0, 4                             #sys code to print_string
	la $a0, input_msg                     #printing the prompt message for input
	syscall                               #call system to print
	
	li $v0, 5                             #sys code to read
	syscall                               #call system to read
	move $s0, $v0                         #saving the input number
	
	li $v0, 5                             #sys code to read
	syscall                               #call system to read
	move $s1, $v0                         #saving the input number

	jal check_non_negative_values         #checking if the values are non negative
	jal find_gcd                          #finding the gcd
	move $s2, $v0                         #saving the input number
	
	li $v0, 4                             #giving instruction to print
	la $a0, found_msg                     #printing the found message for input
	syscall                               #call system to print
	
	li $v0, 1                             #giving instruction to print integer
	move $a0, $s2                         #moving value in s2 to argument register 
	syscall                               #call system to print
	
	j exit                                #jump to exit 

check_non_negative_values:
	addi $sp, $sp, -12                    #s0:upwards by subtracting 12 from the stack pointer
	sw $s0, 0($sp)                        #s1:storing word in reg s0 from 0 offset from sp
	sw $s1, 4($sp)                        #s2:storing word in reg s1 from 4 offset from sp
	sw $ra, 8($sp)                        #s3:storing word in reg ra from 8 offset from sp

	blez $s0, fail                        #if s0<=0 branch to fail
	blez $s1, fail                        #if s1<=0 branch to fail
	
	bgt $s1, $s0, return_normal1          #if s1>s0 branch to switch order of s1 and s0
	lw $ra, 8($sp)	                      #reverts3:loading word in reg ra from 8 offset in stack pointer
	lw $s1, 4($sp)	                      #reverloading word in reg s1 from 4 offset in stack pointer
	lw $s0, 0($sp)	                      #loading word in reg s0 from 0 offset in stack pointer
	addi $sp, $sp, 12                     #adding 12 to the stack pointer
	jr $ra                                #back to main
	
	return_normal1:                       #s1 to s0 and s0 to s1
	lw $ra, 8($sp)	                      #loading word in reg ra from 8 offset in stack pointer
	lw $s0, 4($sp)	                      #loading word in reg s1 from 4 offset in stack pointer
	lw $s1, 0($sp)	                      #loading word in reg s0 from 0 offset in stack pointer
  	addi $sp, $sp, 12                     #adding 12 to the stack pointer
	jr $ra                                #back to main
	
	fail:                              
		li $v0, 4                           #giving instruction to print
    		la $a0, error_msg                   #printing the error message for input
    		syscall                             #call system to print
		j exit                              #exit block
	
find_gcd:                               #find_GCD
	addi $sp, $sp, -12                    #moving upwards by 12
	sw $s0, 0($sp)                        #storing words in reg s0 from 0 offset from sp
	sw $s1, 4($sp)                        #storing words in reg s1 from 4 offset from sp
	sw $ra, 8($sp)                        #storing words in reg ra from 8 offset from sp
	
	bnez $s0, recur                       #if s0!=0 go to recur branch
	
	move $v0, $s1                         #move the value stored in s1 to reg v0
	j return_normal2                      #jump to return normal12
    
	recur:                                #recur
	div $t0, $s1, $s0                     #divide s1 by s0 and store it in t0
	mulo $t0, $t0, $s0                    #multiply t0 with s0 and store it in t0
	sub $t0, $s1, $t0	              #it's basically s1%s0 in t0 now
	
	move $s1, $s0                         #move the value from s0 to s1
	move $s0, $t0                         #move s1%s0 to s0
	jal find_gcd                          #recursively find the gcd of s1 and s0
	
	return_normal2:                       #return_normal12
	lw $ra, 8($sp)	                      #loading word in reg ra from 8 offset in stack pointer
	lw $s0, 4($sp)	                      #loading word in reg s1 from 4 offset in stack pointer
	lw $s1, 0($sp)	                      #loading word in reg s0 from 0 offset in stack pointer
  	addi $sp, $sp, 12                     #adding 12 to the stack pointer
	jr $ra                                #back to main
	
exit:                                   #exit block
	li $v0, 10                            #loading exit command
	syscall                               #call system to exit
