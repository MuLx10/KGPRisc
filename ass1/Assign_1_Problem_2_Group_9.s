# Mehul Nirala 16CS10034
# Chelsi Raheja 16CS10013
# Group 9 
####################### Data segment ######################################
 .data
 wlcm_input:   .asciiz "This code finds the factorial (a0 = 1 a1 = 1) the input number \n"
msg_input:   .asciiz "Enter the argument (positive number): "
msg_arg:   .asciiz "The argument is: "
msg_result1:   .asciiz "The " 
msg_result2:   .asciiz "th fibonacci number is = "
newline:   .asciiz "\n"
error : .asciiz "\nNumber is negative Sorry! :("
error0 : .asciiz "\nIndexing starts from 1 :() "
####################### Data segment ######################################

####################### Text segment ######################################
.text
.globl main
     main:
	      la $a0, wlcm_input 
          li $v0, 4 # Prepare to print the wlcm message
          syscall  # print the message
		  
          la $a0, msg_input 
          li $v0, 4 # Prepare to print the message
          syscall  # print the message

          li $v0, 5 # for read_int
          syscall # argument in $v0
          move $a0, $v0 # argument in $a0
           
          # Print argument to make sure....debug step
          move $t0, $a0 # temporary register $t0 contains the argument   
          li  $v0, 4 # for print_str
          la  $a0, msg_arg  # preparing to print the message
          syscall  # print the string
          li  $v0, 1 # for print_int
          move $a0, $t0 # get argument back in $a0
          syscall  # print the argument
          
          move $t4, $t0 

          li $t1, 0x01
		  li $t2, 0x01
		  beq,$t4,$0,Error0
		  bltz, $t4, Error
		  blt $t4, 3, LessThan3
		  
		  move $t5,$t4
		  sub $t4, $t4,2
		  
		  
		  
          # Run a loop and perform addition of natural numbers up to $a04
          Loop:  
		  add $t3, $t1, $t2
          move $t1,$t2
		  move $t2,$t3
		  sub $t4, $t4,1
          bgt $t4, $zero, Loop
          
          
		  li  $v0, 4 # for print_str
          la  $a0, newline  # preparing to print the message 
          syscall  # print the string
          
          # Print result
          li  $v0, 4 # for print_str
          la  $a0, msg_result1  # preparing to print the message 
          syscall  # print the string

          li  $v0, 1 # for print_int
          move  $a0, $t5  # preparing to print the message 
          syscall  # print the string

          li  $v0, 4 # for print_str
          la  $a0, msg_result2  # preparing to print the message 
          syscall  # print the string
      
              
          move $a0, $t3 # get result in $a0
          li  $v0, 1 # for print_int
          syscall  # print the result
		  li $v0, 10
          syscall # exit

     LessThan3:
	      li $t3, 0x01

	      li  $v0, 4 # for print_str
          la  $a0, newline  # preparing to print the message 
          syscall  # print the string
          # Print result
          li  $v0, 4 # for print_str
          la  $a0, msg_result1  # preparing to print the message 
          syscall  # print the string

          li  $v0, 1 # for print_str
          move  $a0, $t4  # preparing to print the message 
          syscall  # print the string

          li  $v0, 4 # for print_str
          la  $a0, msg_result2  # preparing to print the message 
          syscall  # print the string

		  move $a0, $t3 # get result in $a0
          li  $v0, 1 # for print_int
          syscall  # print the result

		  li $v0, 10
          syscall # exit

     Error:
          li  $v0, 4 # for print_str
          la  $a0, error  # preparing to print the message 
          syscall  # print the string
		  li $v0, 10
          syscall # exit
     Error0:
          li  $v0, 4 # for print_str
          la  $a0, error0  # preparing to print the message 
          syscall  # print the string
		  li $v0, 10
          syscall # exit


	 
           
####################### Text segment ######################################



