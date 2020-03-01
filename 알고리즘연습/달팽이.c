#include<stdio.h>
int main(){
	int num;
	scanf("%d", &num);
	
	int board[num][num]; 
	int minw = 0, minh = 1, maxw = num - 1, maxh = num - 1;
	int i, j, x = -1, y = 0;
	int move[2] = {1, 0};//x, y 
	
	for(i = 0; i < num * num;i++){
		x += move[0];
		y += move[1];
		
		board[x][y] = i + 1;
		
		if(x == minw && y == maxh + 1){
			move[0] = 0;
			move[1] = -1;
			minw += 1;
		}else if(x == maxw && y == minh - 1){
			move[0] = 0;
			move[1] = 1;
			maxw -= 1;
		}else if(y == minh && x == minw - 1){
			move[0] = 1;
			move[1] = 0;
			minh += 1;
		}else if(y == maxh && x == maxw + 1){
			move[0] = -1;
			move[1] = 0;
			maxh -= 1;
		}
	}
	
	for(i = 0; i < num; i++){
		for(j = 0; j < num; j++){
			printf(" %3d ", board[j][i]);
		}
		printf("\n");
	}
	return 0;
}
