#include <stdio.h>
#include <math.h>
#include <limits.h>
unsigned long long N;
unsigned long long C;

int main(){
    printf("size : %llu\n", ULONG_MAX);
    N=1844674407370955161*10;
    C=18446744073709551615;
    if (N==C){
        printf("wow");
    } else {
        printf ("uhh");
    }

    printf("%llu",N);
    return 0;
}