#include<stdio.h>
main(){
	int num;
	int i;
	scanf("%d", &num);
	
	for(i = 0; num != 0; i++){
		num = num / 10;
	}
	printf("%d", i);
}
