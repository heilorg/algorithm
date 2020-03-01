#include<stdio.h>
int main(){
	long long int no, i, com = 3, flag = 0;
	char num[200], numr[300];
	scanf("%lld", &no);
	scanf("%s", num);
	
	for(i = no - 1 + (no - 1) / 3; i >= 0; i--){
		if(com == 0){
			numr[i - flag] = ',';
			com = 3;
			flag += 1;
			i += 1;
			continue;
		}
		com--;
		numr[i - flag] = num[i - (no - 1) / 3];
	}
	
	numr[no + (no - 1) / 3] = '\0';
	printf("%s", numr);
}
