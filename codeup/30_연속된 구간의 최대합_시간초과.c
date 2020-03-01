#include<stdio.h>

int num;
int arr[100001];
int max = -500;

void fun(int n){
	int i;
	int sum = arr[n];
	for(i = n + 1; i < num; i++){
		sum = sum + arr[i];
		if(max < sum)max = sum;
	}
	if(max < sum)max = sum;
}

main(){
	scanf("%d", &num);
	
	int i;
	
	for(i = 0; i < num; i++)
		scanf("%d", &arr[i]);
	
	for(i = 0; i < num; i++)
		fun(i);
		
	printf("%d", max);
}
