#include<stdio.h>
#define NO 5
main(){
	int num[NO], min, max;
	int i;
	
	for(i = 0; i < NO; i++){
		scanf("%d", &num[i]);
	}
	min = max = num[0];
	
	for(i = 1; i < NO; i++){
		if(max < num[i])max = num[i];
		if(min > num[i])min = num[i];
	}
	
	printf("%d\n%d", max, min);
}
