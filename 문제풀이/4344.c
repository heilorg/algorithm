#include<stdio.h>
main(){
	int i, j;
	int check;
	
	scanf("%d", &check);
	for(i = 0; i < check; i++){
		int num;
		scanf("%d", &num);
		int sum = 0;
		int data[num];
		
		for(j = 0; j < num; j++){
			scanf("%d", &data[j]);
			sum += data[j];
		}
		
		double avg = (double)sum / (double)num;
		int up = 0;
		
		for(j = 0; j < num; j++){
			if(avg < data[j])up += 1;
		}
		
		printf("%0.3d%%\n", (double)up / (double)num * 100.0);
	}
}
