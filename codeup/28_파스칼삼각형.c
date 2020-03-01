#include<stdio.h>
main(){
	int i, j, no;
	
	scanf("%d", &no);
	long long num[no][no];
	
	for(i = 0; i < no; i++){		
		for(j = 0; j < no; j++){
			num[i][j] = 0;
		}
	}	
	for(i = 0; i < no; i++){		
		for(j = 0; j <= i; j++){
			if(j == 0 || j == i)num[i][j] = 1;
			else num[i][j] = num[i - 1][j] + num[i - 1][j - 1];
		}
	}
	
	
	for(i = 0; i < no; i++){		
		for(j = 0; j <= i; j++){
			if(num[i][j] != 0)
				printf("%lld ", num[i][j]);
			else{
				break;
			}
		}
		printf("\n");
	}
}
