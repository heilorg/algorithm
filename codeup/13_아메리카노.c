#include<stdio.h>
int main(){
	int k, n, r = 0;
	
	scanf("%d %d", &k, &n);
	
	for(;k>=n;){
		k -= n;
		r += 1;
		k += 1;
	}
	printf("%d", r);
}
