#include <stdio.h>
#include <math.h>
float a,b,c,d,e;
float gmm=3e-11,xray=3e-9,ultra=4e-7,visib=7e-7,inf=1.4e-5,micr=1e-1;

int main(){
    a=1;
    while (a!=0){    
        printf("enter a specific wavelength value or zero to quit =");
        scanf("%e", &b);
        if (b<=gmm){
            printf("the wave length %.1e is a gamma ray\n", b);
            continue;;
        } else if (b>gmm && b<=xray){
            printf("the wave length %.1e is a xray\n", b);
            continue;
        } else if (b>=xray && b<ultra){
            printf("the wave length %.1e is a ultraviolet ray\n", b);
            continue;
        } else if (b>ultra && b<=visib){
            printf("the wave length %.1e is a visible light\n", b);
            continue;
        } else if (b>visib && b<=inf){
            printf("the wave length %.1e is a infrared ray\n", b);
            continue;   
        } else if (b>inf && b<=micr) {
            printf("the wave length %.1e is a microwave ray\n", b);
            continue;
        } else if (b>micr){
            printf("the wave length %.1e is a radiowave\n", b);
            continue;
        } else if(b==0){
            break;
        } else {
            break;
        }
    }
    return 0;
}