#include<stdio.h>
main(){
	long long int i, j, no, stack = 0;
	
	scanf("%lld", &no);
	
	long long int cow[no];
	for(i = 0; i < no; i++)
		scanf("%lld", &cow[i]);
		
	for(i = 0; i < no - 1; i++){
		if(cow[i] > cow[i + 1]){
			for(j = i + 1; cow[i] > cow[j]; j++){
				if(j == no)break;
				stack+=1;
			}
		}
	}
	printf("%lld", stack);
}
