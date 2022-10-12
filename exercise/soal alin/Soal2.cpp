#include<stdio.h>
/*
Diberikan input bilangan n
outputkan bilangan 1 sampai n, tapi kalau genap outputkan "*"
karena gada constraint, n kita anggap int
*/
int main(){
	int n;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		if(i%2!=0){
			printf("")
		}
		else printf("* ");
	}
	puts(""); //print newline
	return 0;
}
