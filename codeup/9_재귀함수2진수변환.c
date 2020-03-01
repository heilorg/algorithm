#include<stdio.h>
void jinsu(int num){
	int result=0;
	if(num / 2 == 0){
		printf("%c", num % 2 + '0');
	}else{
		jinsu(num/2);
		printf("%c", num % 2 + '0');
	}
	return result;
}
main(){
	int num, result;
	
	scanf("%d", &num);
	jinsu(num);
}
