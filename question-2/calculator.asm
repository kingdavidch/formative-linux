section .data
    prompt1 db "Enter first number: ", 0
    prompt2 db "Enter second number: ", 0
    menu db "1. Add 2. Subtract 3. Multiply 4. Divide 5. Modulus: ", 0
    result db "Result: ", 0
    error db "Error: Division by zero", 0

section .bss
    num1 resd 1
    num2 resd 1
    choice resb 1

section .text
    global _start

_start:
    ; Read inputs and display menu (simplified)
    ; ... (code for input handling and operations)
    ; Full implementation includes integer parsing and error checks

exit:
    mov eax, 1
    xor ebx, ebx
    int 0x80
