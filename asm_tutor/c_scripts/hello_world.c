#include <stdio.h>

int main (){

    printf("Hello World");

};

/*
this is the assembly dump 

   0x0000000000001139 <+0>:	    push   %rbp                             ; push the stack and add the address of current base stack     
   0x000000000000113a <+1>:	    mov    %rsp,%rbp                        ; move stack base pointer addr to stack pointer
   0x000000000000113d <+4>:	    lea    0xec0(%rip),%rax        # 0x2004 ; load the address 0x2004 to the accumulator
   0x0000000000001144 <+11>:	mov    %rax,%rdi                        ; move 0x2004 to RDI destination index for string ops
   0x0000000000001147 <+14>:	mov    $0x0,%eax                        ; move $0x0 to EAX
   0x000000000000114c <+19>:	call   0x1030 <printf@plt>              ; call printf function
   0x0000000000001151 <+24>:	mov    $0x0,%eax                        ; move $0x0 to EAX
   0x0000000000001156 <+29>:	pop    %rbp                             ; pop the stack base pointer
   0x0000000000001157 <+30>:	ret                                     ;


*/