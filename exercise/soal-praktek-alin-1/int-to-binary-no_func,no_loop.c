/* my method to convert to binary is by:
1. given the int is k
2. subtract k by 2 and save to a
3. modulo k by 2 and assign the remainder to the array

*/
#include <stdio.h>
#include <math.h>

int bin[7], k, n;
int a,b,c,d,e,f,g,h;


int main(){
    scanf("%d", &k);
    a=k/2;
    b=a/2;
    c=b/2;
    d=c/2;
    e=d/2;
    f=e/2;
    g=f/2;
    bin[0]=k%2;
    bin[1]=a%2;
    bin[2]=b%2;
    bin[3]=c%2;
    bin[4]=d%2;
    bin[5]=e%2;
    bin[6]=f%2;
    bin[7]=g%2;
    printf("%d", bin[7]);
    printf("%d", bin[6]);
    printf("%d", bin[5]);
    printf("%d", bin[4]);
    printf("%d", bin[3]);
    printf("%d", bin[2]);
    printf("%d", bin[1]);
    printf("%d", bin[0]);


}