#include<stdio.h>
main(){
	int n1, n2;
	int i, j;
	
	scanf("%d %d", &n1, &n2);
	
	if(n2 == 1){
		for(i = 0; i < n1; i++){
			for(j = 0; j < n1; j++)
				putchar('*');
			putchar('\n');
		}
	}else{
		for(i = 0; i < n1; i++){
		if(i == 0 || i == n1 - 1){
			for(j = 0; j < n1; j++)
				putchar('*');
			putchar('\n');
		}else{
			putchar('*');
			for(j = 0; j < n1 - 2; j++){
				if((i + j) % n2 == n2 - 2)putchar('*');
				else putchar(' ');
			}
			putchar('*');
			putchar('\n');
		}
	}
		
	}
	
}
