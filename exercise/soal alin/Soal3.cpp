#include<stdio.h>
/*
diberikan input bilangan n (kita anggap int)
outputkan bilangan [2, n], kalau prima outputkan "*"
*/

int main(){
	int n, isPrime;
	scanf("%d",&n);
	printf("* "); //2 prima jadi langsung print saja "*"
	for(int i = 3; i <= n; i++){
		if( (i & 1) == 0){ //Genap
			printf("%d ",i);
			continue;
		}
		isPrime = 1; //kita set True sebelum pengecekan prima
		for(int j = 3; j * j <= i; j++){
			if(i % j == 0){
				isPrime = 0; //tandai bukan prima karena mendapatkan angka yang membagi habis
				break; //kalau udah gak prime gak perlu lanjut dicek
			}
			//sebuah angka bukan prima pasti mempunyai faktor <= sqrt(n) nya
			//sehingga pencarin hanya perlu dilakukan j <= sqrt(i) atau j * j <= i
		}
		if(isPrime) printf("* ");
		else printf("%d ",i);
	}
	puts(""); //print newline
	return 0;
}
