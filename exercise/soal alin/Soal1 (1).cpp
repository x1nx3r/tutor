#include<stdio.h>
/*
Diberikan input bilangan
output kan "Genap" bila genap, "Ganjil" bila ganjil
input gada constraint jadi anggap int saja
*/
int main(){
	int angka;
	scanf("%d",&angka);
	if(angka%2!=0) {
		printf("Ganjil");
	}
	else {
		printf("Genap");
	}
	return 0;
}
