#include <stdio.h>
#include <math.h>

int slm[2]={3, 6}, hlc[2]={4, 8}, aby[2]={5, 10};
int N, excess_value, aby_multiplier, hlc_multiplier, slm_multiplier;
int slm_atk, slm_cost, hlc_atk, hlc_cost, aby_atk, aby_cost, total_atk, total_cost;
// gaem likes to kill powerful monsters

int main(){
    scanf("%d", &N);
    excess_value=N%10;
    aby_multiplier=(N-excess_value)/10;
    if(excess_value==8){
        hlc_multiplier=1;
    } else if (excess_value>8){
        slm_multiplier=2;
    } else if (excess_value==7){
        hlc_multiplier=1;
    } else {
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

    printf("is the desired exp to be gained : %d\n",N);
    printf("is total attack happened %d\n",total_atk);
    printf("is total aby killed : %d\n",aby_multiplier);
    printf("is total hlc killed : %d\n",hlc_multiplier);
    printf("is total slm killed : %d\n",slm_multiplier);
    printf("is total aby exp acquired : %d\n",aby_cost);
    printf("is total hlc exp acquired : %d\n",hlc_cost);
    printf("is total slm exp acquired : %d\n",slm_cost);
    printf("is the acquired exp : %d\n",total_cost);

    return 0;
}