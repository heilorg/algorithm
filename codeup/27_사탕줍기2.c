#include<stdio.h>

int n;
int map[10][10];
int max = 0;
void pick(int num, int root[]){
	if(n == num){
		int i;
		int sum = 0;
		for(i = 0; i < n; i++){
			sum += map[i][root[i]];
		}
		if(sum > max)max = sum;
	}else{
		int i, j;
		for(i = 0; i < n; i++){
			int flag = 0;
			for(j = 0; j < num; j++){
				if(root[j] == i)flag = 1;
			}
			if(flag == 0){
				root[num] = i;
				pick(num + 1, root);	
			}
		}
	}
}


main(){
	
	scanf("%d", &n);


	int i, j, s, k;
	
	
	for(i = 0; i < n; i++)
		for(j = 0; j < n; j++){
			scanf("%d", &map[i][j]);
		}
	
	int root[n];
	for(i = 0; i < n; i++)root[i] = 11;
	
	pick(0, root);
	
	printf("%d", max);
}
