#include<stdio.h>
/*
Diberikan N dan N buah input, outputkan secara terbalik inputnya
kita anggap n adalah int 
*/
int main(){
	int n;
	scanf("%d",&n);
	int inputs[n];
	for(int i = 0; i < n; i++) scanf("%d",&inputs[i]);
	for(int i = n-1; i >= 0; i--) printf("%d\n", inputs[i]);
	return 0;
}
	