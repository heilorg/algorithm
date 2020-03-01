#include<stdio.h>
long long int ubacsu(int num){
	long long int re = 1;
	
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
	long long int start, end, i, j;
	scanf("%lld %lld", &start, &end);
	long long int data[2];
	for(i = start; i <= end; i++){
		if(i == start){
			data[0] = ubacsu(i);
			data[1] = i;
		}else{
			long long int su = ubacsu(i);
			if(data[0] < su){
				data[0] = su;
				data[1] = i;
			}
		}
	}
	
	printf("%lld %lld", data[1], data[0]);
}
