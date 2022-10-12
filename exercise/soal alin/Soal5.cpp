#include<stdio.h>

int main(){
	char input[101]; //kasih aman lebihin sedikit besarannya
	gets(input);
	char lower[] = "aiueo";
	char upper[] = "AIUEO";
	int count[5] = {0}, i = -1 //karena prefix increment;
	while(input[++i] != '\0'){
		for(int j = 0; j < 5; j++) count[j] += (input[i] == lower[j] || input[i] == upper[j]);
		//karena True == 1, jadi bisa tanpa if
	}
	for(i = 0; i < 5; i++) printf("%c/%c : %d\n",upper[i],lower[i],count[i]);
	return 0;
}
