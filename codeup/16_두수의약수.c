#include<stdio.h>
main(){
	long long int n1,n2,i;
	scanf("%lld %lld", &n1, &n2);
	for(i=1;i<=n2;i++){
		if(n1%i==0||n2%i==0)
			printf("%lld ",i);
	}
}
