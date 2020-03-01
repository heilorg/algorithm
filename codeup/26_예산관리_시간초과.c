#include<stdio.h>

int n, goal;
int arr[21];
int max = 0;

void pick(int num, int root[]){
	if(n <= num){
		int i;
		int sum = arr[root[0]];
		for(i = 1; i < n; i++){
			if(sum + arr[root[i]] >= goal)break;
			sum = sum + arr[root[i]];
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
	
	scanf("%d", &goal);
	scanf("%d", &n);

	int i;
	
	for(i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	
	int root[n];
	for(i = 0; i < n; i++)root[i] = 11;
	
	pick(0, root);
	
	printf("%d", max);
}
