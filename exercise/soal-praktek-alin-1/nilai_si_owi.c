#include <stdio.h>
int tru_ans, fals_ans, ttl_point;
int hour, minute, sec, hour_simpl, minute_simpl, ttl_sec, stake_sec, min_late;
int init_tru_ans, ins1_tru_ans, min_late1, min_late2, late_score1, late_score2, ttl_late_tolerance, ins2_tru_ans, sec_point_multiplier;

int main(){
    scanf("%d", &tru_ans);
    if(tru_ans>25 && tru_ans<1){
        printf("please input between 1 to 25");
    } else{
        printf("okay you entered %d", tru_ans);
    }
    scanf("%d %d %d", &hour, &minute, &sec);
    if (hour>10 && hour<7){
        printf("please input an hour between 7 to 10");
    } else if (minute>59 && minute<0){
        printf("please input a valid amount9");
    } else if (sec>59 && sec<0) {
        printf("please input a valid amount");
    } else {
        printf("you've entered : %d:%d:%d\n", hour, minute, sec);
    }
    
    init_tru_ans=tru_ans*4;
    if(tru_ans<25){
        fals_ans=(25-tru_ans)*-1;
        ins1_tru_ans=init_tru_ans+fals_ans;
    }   else{
        ins1_tru_ans=init_tru_ans;
    }
    
    minute_simpl=minute*60;
    hour_simpl=hour*3600;
    ttl_sec=minute_simpl+sec+hour_simpl;
    stake_sec=14100;
    if (ttl_sec%450==0 && tru_ans>4){
        sec_point_multiplier=(14100-ttl_sec)/450*2;        
    }   else if(ttl_sec>=14100 && ttl_sec<=14700) {
        min_late=ttl_sec-stake_sec;
        ttl_late_tolerance=(min_late/150)*-1;
    }   else{}

    ins2_tru_ans=(sec_point_multiplier+ttl_late_tolerance)+ins1_tru_ans;
    ttl_point=ins2_tru_ans;
    printf("yer total point %d", ttl_point);   
    return 0;
}