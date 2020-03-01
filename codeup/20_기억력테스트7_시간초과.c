#include<stdio.h>
main(){
	int no, que, i, j, sum;
	scanf("%d %d", &no, &que);
	int num[no];
	int qu[que][2];
	
	for(i = 0; i < no; i++)
		scanf("%d", &num[i]);
		
	for(i = 0; i < que; i++)
		scanf("%d %d", &qu[i][0], &qu[i][1]);
		
	for(i = 0; i < que; i++){
		sum = 0;
		
		for(j = qu[i][0] - 1; j <= qu[i][1] - 1; j++)
			sum += num[j];
			
		printf("%d\n", sum);
	}
}
