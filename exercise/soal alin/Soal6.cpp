#include<stdio.h>
/*
input berupa string "snake_case"
outputkan string "camelCase"
*/
int main(){
	char input[101]; //anggap max input 100
	scanf("%s",input); //input tidak bisa "_string", bukan "snake_case"
	int i = -1, isUpper = 0, diff = 'a' - 'A'; //32
	while(input[++i] != '\0'){
		if(input[i] == '_'){
			isUpper = 1;
			continue;
		}
		if(isUpper && 'a' <= input[i] && input[i] <= 'z'){
			//jika sekarang harusnya huruf besar tapi huruf sekarang huruf kecil
			printf("%c", input[i] - diff);
			isUpper = 0;
		}
		else if(!isUpper && 'A' <= input[i] && input[i] <= 'Z'){
			//jika sekarang harusnya huruf kecil tapi huruf sekarang huruf besar
			printf("%c", input[i] + diff);
		}
		else
			printf("%c",input[i]);
	}
	puts(""); //print newline
	return 0;
}

