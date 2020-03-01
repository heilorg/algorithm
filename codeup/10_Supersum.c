#include<stdio.h>
long long int SuperSum(long long int k, long long int n){
	long long int i, result = 0;
	if(k == 0)return n;
	else{
		for(i = 0; i < n; i++)
			result += SuperSum((k - 1), (i + 1));
		
		return result;
	}
}
main(){
	int k, n;
	while( scanf("%d %d", &k, &n) != EOF )
		printf("%lld\n", SuperSum(k, n));
}
