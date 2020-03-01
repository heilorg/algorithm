#include<stdio.h>
int main(){
	int num, i, max = 0;
	scanf("%d", &num);
	
	int tic[num][2];
	
	for(i = 0; i < num; i++){
		scanf("%d %d", &tic[i][0], &tic[i][1]);
	}
	
	printf("%d", max);
}
