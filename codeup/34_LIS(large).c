#include<stdio.h>
int n;
int max = 0;
void LIS(int arr[], int num, int cnt){
	cnt += 1;
	if(max < cnt)max = cnt;
	
	int i;
	
	for(i = num + 1; i < n; i++){
		if(arr[num] < arr[i])LIS(arr, i, cnt);
	}
	
	
}

main(){
	int i;
	
	
	scanf("%d", &n);
	
	int arr[n];
	
	for(i = 0; i < n; i++)
		scanf("%d", &arr[i]);
		
		
	LIS(arr, 0, 0);
		
		
		
	printf("%d", max);
}
