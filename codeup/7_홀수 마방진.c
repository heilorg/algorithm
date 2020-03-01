#include<stdio.h>
int main() 
{
	int map[50][50];
	int n, i, j;
	int x = 1;
	scanf("%d", &n);
	int y = (n + 1) / 2;
	for(i = 0; i < n; i++){
		for(j = 1; j <= n; j++){
			map[x - 1][y - 1] = i * n + j;
			if(j == n){
				if(x + 1 == n + 1)x = 1;
				else x += 1;
			}else{
				if(y + 1 == n + 1)y = 1;
				else y += 1;
				if(x - 1 == 0)x = n;
				else x -= 1;
			}
		}
	}
	
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++)printf("%d ", map[i][j]);
		putchar('\n'); 
	}
}
