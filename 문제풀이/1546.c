#include<stdio.h>
main(){
	int num;
	scanf("%d", &num);
	
	int data[num];
	int big = 0;
	int i;
	for(i = 0; i < num; i++){
		scanf("%d", &data[i]);
		if(big < data[i])big = data[i];
	}
	
	float sum = 0.0;
	for(i = 0; i < num; i++){
		sum += (float)data[i] / (float)big * 100.0;
	}
	printf("%.2f", sum/(float)num);
}
