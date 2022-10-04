#include <stdio.h>
#include <math.h>
int i,a,b,c,d,e,f;

int main(){
    printf("enter yor nyumber");
    scanf("%d", &a);
    int k=a;
    b=0;
    c=0;
    printf("value of N is %d \n", a);
    for (i=0;i<k;i++){
        if(a%2==0){
            b+=1;
        } else if (a%2!=0){
            c+=1;
        } else {
            printf("the number you entered is maybe irrational");
        }
        a-=1;
    }
    printf("total odd number %d \n",c);
    printf("total even number %d \n", b);
    printf("sqrt of total odd number %lf \n", sqrt(b));
    printf("sqrt of total even number %lf \n", sqrt(c));
    return 0;
}