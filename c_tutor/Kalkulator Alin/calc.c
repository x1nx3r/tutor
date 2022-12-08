#include <stdio.h>
#include <math.h>
//#include "header.h"

//ini prototype biar keren hehe
int tambah(int a, int b);
int kurang(int c, int d);
int kali(int e, int f);
int bagi(int g, int h);
int read(int i);

int main()
{
    //bikin menu kalkulatornya
    printf("Selamat datang di Kalkulator Alin :D\n");
    printf("Masukkan angka yang kalian inginkan :D\n");
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    printf("Pilihlah proses aritmatika yang kalian inginkan :D\n");
    int z;
    printf("1 = Tambah\n");
    printf("2 = Kurang\n");
    printf("3 = Kali\n");
    printf("4 = Bagi\n");
    scanf("%d", &z);

    if(z == 1){
        printf("%d", tambah(num1, num2));
    }else if(z == 2){
        printf("%d", kurang(num1, num2));
    }else if(z == 3){
        printf("%d", kali(num1, num2));
    }else if(z == 4){
        printf("%d", bagi(num1, num2));
    }

    return 0;
}

int tambah(int a, int b)
{
    int hasil = a + b;
    return hasil;
}

int kurang(int c, int d)
{
    int hasil = c - d;
    return hasil;
}

int kali(int e, int f)
{
    int hasil = e * f;
    return hasil;
}

int bagi(int g, int h)
{
    int hasil = g / h;
    return hasil;
}

int read(int i)
{
    
}