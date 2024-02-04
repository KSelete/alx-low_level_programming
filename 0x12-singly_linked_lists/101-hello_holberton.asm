section .data
    message db 'Hello, Holberton', 10   ; Message to be printed, followed by newline
    format db "%s", 0                    ; Format string for printf

section .text
    extern printf

global _start

_start:
    push message                        ; Push the address of the message onto the stack
    push format                         ; Push the format string onto the stack
    call printf                         ; Call printf function
    add rsp, 16                         ; Clean up the stack after printf call

    ; Exit the program
    mov rax, 60                         ; syscall number for exit
    xor rdi, rdi                        ; status code 0
    syscall                             ; invoke syscall

