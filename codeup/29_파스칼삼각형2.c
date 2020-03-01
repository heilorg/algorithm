#include<stdio.h>
main(){
	int i, j, n1, n2;
	
	unsigned long long int map[50][50];
	for(i = 0; i < 50; i++){
		for(j = 0; j < 50; j++){
			if(j == 0 || i == 0)map[i][j] = 1;
			else map[i][j] = map[i - 1][j] + map[i][j - 1];
		}
	}
	
	for(i = 0; i < 50; i++){
		for(j = 0; j < 50; j++){
			
			printf("%u ", map[i][j]);
		}
		printf("\n");
	}
	
	
	
	
	
	
//	scanf("%d %d", &n1, &n2);
//	printf("%d", map[n2 - 1][n1 - 1] % 100000000);
}
