	extern printf
	extern scanf
        section .data
scanf_format: db "%d %d",0
printf_format: db "%d",10,0
n1:     dd 0
n2:     dd 0
        section .text
        global main
main:
        push ebp
        mov ebp,esp

        push n2
        push n1
        push scanf_format
        call scanf
        add esp,12

        mov eax,dword[n1]
        add eax,dword[n2]

        push eax
        push printf_format
        call printf
        add esp,8

        mov esp,ebp
        pop ebp
        mov eax, 0
        ret
