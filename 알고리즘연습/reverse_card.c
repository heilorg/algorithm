#include<stdio.h>
int main(){
	int arr[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	
	int start, end, i, j, temp;
	for(i = 0; i < 10; i++){
		scanf("%d %d", &start, &end);
		
		for(; start < end; start++, end--){
			temp = arr[start - 1];
			arr[start - 1] = arr[end - 1];
			arr[end - 1] = temp;
		}
	}
	
	for(i = 0; i < 20; i++){
		printf("%d ", arr[i]);
	}
}
