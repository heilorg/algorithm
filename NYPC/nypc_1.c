#include<stdio.h>
int main(){
	int num;
	scanf("%d", &num);
	
	int myobj[num], needobj[num];
	int i, cnt = 0, flag = 0;
	
	for(i = 0; i < num; i++){
		scanf("%d", &myobj[i]);
	}
	for(i = 0; i < num; i++){
		scanf("%d", &needobj[i]);
	}
	
	for(;;){
		
		for(i = 0; i < num; i++){
			if(myobj[i] - needobj[i] < 0){
				flag = 1;
			}
		}
		if(flag == 1)break;
		for(i = 0; i < num; i++){
			myobj[i] -= needobj[i];
		}
		cnt++;
		for(i = 0; i < num; i++){
			if(myobj[i] <= 0){
				flag = 1;
			}
		}
	}
	printf("%d", cnt);
}
