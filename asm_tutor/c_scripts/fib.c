#include <stdio.h>

int main(){
    int x, y, z;

    while (1){
        x=0;
        y=1;
        do {
            printf("%d \n", x);

            z = x + y;
            x = y;
            y = z;
        } while (x<255);
    }
    return 0;
}

/*
3	int main(){
   0x0000000000001139 <+0>:	push   %rbp
   0x000000000000113a <+1>:	mov    %rsp,%rbp
   0x000000000000113d <+4>:	sub    $0x10,%rsp

4	    int x, y, z;
5	
6	    while (1){
7	        x=0;
   0x0000000000001141 <+8>:	movl   $0x0,-0xc(%rbp)

8	        y=1;
   0x0000000000001148 <+15>:	movl   $0x1,-0x8(%rbp)

9	        do {
10	            printf("%d \n", x);
   0x000000000000114f <+22>:	mov    -0xc(%rbp),%eax
   0x0000000000001152 <+25>:	mov    %eax,%esi
   0x0000000000001154 <+27>:	lea    0xea9(%rip),%rax        # 0x2004
   0x000000000000115b <+34>:	mov    %rax,%rdi
   0x000000000000115e <+37>:	mov    $0x0,%eax
   0x0000000000001163 <+42>:	call   0x1030 <printf@plt>

11	
12	            z = x + y;
   0x0000000000001168 <+47>:	mov    -0xc(%rbp),%edx
   0x000000000000116b <+50>:	mov    -0x8(%rbp),%eax
   0x000000000000116e <+53>:	add    %edx,%eax
   0x0000000000001170 <+55>:	mov    %eax,-0x4(%rbp)

13	            x = y;
   0x0000000000001173 <+58>:	mov    -0x8(%rbp),%eax
   0x0000000000001176 <+61>:	mov    %eax,-0xc(%rbp)

14	            y = z;
   0x0000000000001179 <+64>:	mov    -0x4(%rbp),%eax
   0x000000000000117c <+67>:	mov    %eax,-0x8(%rbp)

15	        } while (x<255);
   0x000000000000117f <+70>:	cmpl   $0xfe,-0xc(%rbp)
   0x0000000000001186 <+77>:	jle    0x114f <main+22>

7	        x=0;
   0x0000000000001188 <+79>:	jmp    0x1141 <main+8>

*/
