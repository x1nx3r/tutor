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
    scanf("%d",&n);
    if (n>2147483647 && n<0){
        printf ("Please enter a value between 0 till 2147483647");
        return 0;
    } else {}
    if(n>8) {
        printf("you've entered number higher than 8 please try again");
    }   else {
            a=k/2;
            b=a/2;
            c=b/2;
            d=c/2;
            e=d/2;
            f=e/2;
            g=f/2;
            bin[7]=k%2;
            bin[6]=a%2;
            bin[5]=b%2;
            bin[4]=c%2;
            bin[3]=d%2;
            bin[2]=e%2;
            bin[1]=f%2;
            bin[0]=g%2;
            printf("%d",bin[n-1]);
    }
    return 0;
}