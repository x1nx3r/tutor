#include <stdio.h>
#include <math.h>
#include <limits.h>

unsigned long long slm[2]={3, 6}, hlc[2]={4, 8}, aby[2]={5, 10};
unsigned long long N, excess_value, aby_multiplier, hlc_multiplier, slm_multiplier;
unsigned long long slm_atk, slm_cost, hlc_atk, hlc_cost, aby_atk, aby_cost, total_atk, total_cost;
// gaem likes to kill powerful monsters

int main(){
    scanf("%llu", &N);
    if (N>pow(10,19) || N<1){
        printf("Enter a value between 1 to 10^19");
        return 0;
    } else {

    }
    excess_value=N%10;
    aby_multiplier=(N-excess_value)/10;
    if(excess_value==8){
        hlc_multiplier=1;
    } else if (excess_value>8){
        slm_multiplier=2;
    } else if (excess_value==7){
        hlc_multiplier=1;
    } else if (excess_value<7 && excess_value>0 && ceil(excess_value)==floor(excess_value)) {
        slm_multiplier=1;
    }
    slm_atk=slm[0]*slm_multiplier;
    slm_cost=slm[1]*slm_multiplier;
    hlc_atk=hlc[0]*hlc_multiplier;
    hlc_cost=hlc[1]*hlc_multiplier;
    aby_atk=aby[0]*aby_multiplier;
    aby_cost=aby[1]*aby_multiplier;

    total_atk=slm_atk+hlc_atk+aby_atk;
    total_cost=slm_cost+hlc_cost+aby_cost;

    printf("is the desired exp to be gained : %llu\n",N);
    printf("is total attack happened %llu\n",total_atk);
    printf("is total aby killed : %llu\n",aby_multiplier);
    printf("is total hlc killed : %llu\n",hlc_multiplier);
    printf("is total slm killed : %llu\n",slm_multiplier);
    printf("is total aby exp acquired : %llu\n",aby_cost);
    printf("is total hlc exp acquired : %llu\n",hlc_cost);
    printf("is total slm exp acquired : %llu\n",slm_cost);
    printf("is the acquired exp : %llu\n",total_cost);

    return 0;
}