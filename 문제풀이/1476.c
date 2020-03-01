#include<stdio.h>
main(){
	int e, s, m;
	scanf("%d %d %d", &e, &s, &m);
	int i;
	for(i = 1;; i++){
		e--;
		s--;
		m--;
		
		if(e == 0 && s == 0 && m == 0)break;
		
		if(e == 0)e = 15;
		if(s == 0)s = 28;
		if(m == 0)m = 19;
	}
	printf("%d", i);
}
