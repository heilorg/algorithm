#include<stdio.h>
main(){
	unsigned long long int num, sum = 0;
	int nu[6];
	int max = 0, i;
	
	scanf("%d", &num);
	for(i = 0; i < 6; i++){
		scanf("%d", &nu[i]);	
	}
	num = num * num;
	
	
	for(i = 1; i < 6; i++){
		if(nu[max] < nu[i]){
			max = i;
		}
	}
	for(i = 0; i < 6; i++){
		if(i != max)
			sum += nu[i];
	}
	
	printf("%u", sum * num);
//	printf("%d", num);
//	printf("%d", sum);
}
