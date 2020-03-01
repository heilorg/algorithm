#include<stdio.h>
main(){
	long long int i, j, c, start, end, stack = 0, dump, num[9] = {0};
	scanf("%lld %lld", &start, &end);
	
	for(i = start; i <= end; i++){
		dump = i;
		for(j = 0; dump != 0; j++){
			num[j] = dump % 10;
			dump = dump / 10;
		}
		for(c = 0; c < j; c++){
			if(num[c] % 3 == 0 && num[c] != 0)stack+=1;
		}
	}
	printf("%d", stack);
}
