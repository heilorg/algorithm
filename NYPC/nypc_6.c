#include<stdio.h>
int getDivCnt(int n){
	int cnt = 0, i;
	for(i=1 ; i*i<=n ; i++){
	    if(n % i == 0)
	    cnt = (i*i == n) ? cnt+1 : cnt+2;
	}
	return cnt;
}

int main() {
    int n1, n2, sum = 0, i, a, j, result;
    
    a = scanf("%d %d", &n1, &n2);
    
    for(i = n1; i <= n2; i++){
//	    if(i == 1){
//	    	sum += 1;
//	    	continue;
//		}
//	    result = 1;
//	    for(j = 2; j * j < i;j++){
//	        if(i % j == 0){
//	            result += 1;
//	        }
//	    }
//	    result *= 2;
//	    if(j * j == i)result += 1;
	    sum += getDivCnt(i);
	}
    printf("%d", sum);
}
