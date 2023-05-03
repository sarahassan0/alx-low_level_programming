section .data
    hello db "Hello, Holberton", 0x0A, 0x00 ; The string to be printed followed by a newline and null character
    
section .text
    global _start

_start:
    ; Set up the arguments for the printf function
    mov rdi, hello ; Set the first argument (format string) to the address of hello
    xor eax, eax ; Clear the EAX register to indicate printf should return 0
    call printf ; Call the printf function
    
    ; Exit the program with a status of 0
    xor edi, edi ; Set the exit status to 0
    mov eax, 60 ; System call number for exit
    syscall ; Call the system call

