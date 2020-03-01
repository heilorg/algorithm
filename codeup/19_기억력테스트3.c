#include<stdio.h>
main(){
	int no, qrow, i, j, flag;
	
	scanf("%d", &no);
	int num[no];
	
	for(i = 0; i < no; i++){
		scanf("%d", &num[i]);
	}
	
	scanf("%d", &qrow);
	int q[qrow];
	int result[qrow];
	
	for(i = 0; i < qrow; i++){
		scanf("%d", &q[i]);
		result[i] = -1;
	}
	
	for(i = 0; i < qrow; i++){
		int low = 0;
		int high = no;
		for(;;){
			if(low > high)break;
			int mid = (low + high) / 2;
			if(q[i] == num[mid]){
				result[i] = mid + 1;
				break;
			}
			else if(q[i] > num[mid]){
				low = mid + 1;
			}
			else if(q[i] < num[mid]){
				high = mid - 1;
			}
		}
	}
	
	for(i = 0; i < qrow; i++){
		printf("%d ", result[i]);
	}
}
