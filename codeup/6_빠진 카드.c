#include<stdio.h>
main(){
	int no, num[50], i, j, flag;
	scanf("%d", &no);
	
	for(i = 0; i < no - 1; i++){
		scanf("%d", &num[i]);
	}
	
	for(i = 1; i <= no; i++){
		flag = 1;
		for(j = 0; j < no - 1; j++){
			if(num[j] == i)flag = 0;
		}
		if(flag == 1)
			break;
	}
	printf("%d", i); 
}
