#include<stdio.h>
/*
diberikan input bilangan n (kita anggap int)
outputkan bilangan [2, n], kalau prima outputkan "*"
*/

int main(){
	int n, isPrime=0;
	scanf("%d",&n);
	printf("*,");
	for(int i=1;i<=n;i++){
		if(isPrime==0){
			printf("%d",n);
		} else if (isPrime==1){
			printf(" *");
		}
		for(int k=1;i<=n;k++){
			if(n%k==0){
				isPrime=0;
				break;
			} else {
				isPrime=1;
			}
		} 
	}
}
