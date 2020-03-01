#include<stdio.h>
int ubacsu(int num){
	int re = 1;
	
	while(num != 1){
		if(num % 2 == 1){
			num = num * 3 + 1;
		}else{
			num = num / 2;
		}
		re++;	
	}
	return re;
}
main(){
	int start, end, i, j;
	scanf("%d %d", &start, &end);
	int data[2];
	for(i = start; i <= end; i++){
		if(i == start){
			data[0] = ubacsu(i);
			data[1] = i;
		}else{
			int su = ubacsu(i);
			if(data[0] < su){
				data[0] = su;
				data[1] = i;
			}
		}
	}
	
	printf("%d %d", data[1], data[0]);
}
