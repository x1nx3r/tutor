#include <stdio.h>
#include <math.h>

unsigned long long N;
double A;
unsigned long long W=2;
double B;
double C;
int main(){
    scanf("%d",&N);
    if (N<=1){
        printf("enter a value of 2 <= N <= 18446744073709551615");
        return 0;
    } else if (N==2) {
        printf("Ya");
        return 0;
    } else{
    }
    A=(sqrt(N));
    B=modf(A, &C);
    if (B==0.0){
        printf("Ya");
    } else {
        printf("Tidak");
    }
    return 0;
}