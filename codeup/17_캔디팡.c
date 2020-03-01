#include<stdio.h>
int map[7][7] = {0};
	
int search[4][2] = {{1,0},{0,1},{-1,0},{0,-1}};

int r,c,t;

void pang(int x, int y, int num){
	map[x][y] = 6;
	
	
	if(x + 1 < 7 && map[x + 1][y] == num){
		pang(x + 1, y, num);
	}
	
	if(y + 1 < 7 && map[x][y + 1] == num){
		pang(x, y + 1, num);
	}
	if(x - 1 > -1 && map[x - 1][y] == num){
		pang(x - 1, y, num);
	}
	if(y - 1 > -1 && map[x][y - 1] == num){
		pang(x, y - 1, num);
	}
}
main(){
	int result = 0;
	int i, j, n;
	
	for(i = 0; i < 7; i++)
		for(j = 0; j < 7; j++){
			scanf("%d", &map[i][j]);
		} 
		
		
	
	for(i = 0; i < 7; i++)
		for(j = 0; j < 7; j++){
			if(map[i][j] < 6){
				int cnt = 0;
				for(n = 0; n < 4; n++){
					if(i + search[n][0] > 6 || i + search[n][0] < 0)continue;
					if(j + search[n][1] > 6 || j + search[n][1] < 0)continue;
					
					if(map[i + search[n][0]][j + search[n][1]] == map[i][j])cnt++;
				}
				if(cnt > 1){
					result++;
					pang(i,j, map[i][j]);
				}	
			}
		}
		
		
	printf("%d", result);
}
