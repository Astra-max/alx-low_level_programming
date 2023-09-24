section .data
    format db 'Hello, Holberton', 10, 0  ; Added newline character (10)

section .text
    global main
    extern printf

main:
    sub rsp, 8              ; Align stack (assuming you are using GCC)
    mov rdi, format         ; Load the format string address into rdi
    call printf            ; Call printf
    add rsp, 8              ; Restore stack
    mov rax, 60             ; syscall number for exit (64-bit)
    xor rdi, rdi            ; status: 0
    syscall                ; Invoke syscall to exit

section .note.GNU-stack

