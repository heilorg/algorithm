#include<stdio.h>
int main(){
	int maxX, maxY, time, x, y, i, j, fillCnt = 0;
	
	scanf("%d %d %d %d %d", &maxX, &maxY, &time, &x, &y);
	
	
	int map[maxX][maxY], fillMap[maxX][maxY];
	
	for(i = 0; i < maxX; i++){
		for(j = 0; j < maxY; j++){
			fillMap[i][j] = 0;
			scanf("%d", &map[i][j]);
		}
	}
	
	while(fillCnt != maxX * maxY){
		if(fillMap[x][y] == 0){
			fillMap[x][y] = time;
			fillCnt += 1;
		}
		printf("%d %d %d", (map[x][y] + time) % 4, map[x][y], time);
		switch((map[x][y] + time) % 4){
			case 0: printf("right ");
				y += 1;
			break;
			case 1: printf("top ");
				x -= 1;
			break;
			case 2: printf("left ");
				y -= 1;
			break;
			case 3: printf("bottom ");
				x += 1;
			break;
		}
		printf("\n");
		
		if(x < 0) x = 0;
		if(y < 0) y = 0;
		if(x == maxX) x -= 1;
		if(y == maxY) y -= 1;
		
		time += 1;
	}
	
	for(i = 0; i < maxX; i++){
		for(j = 0; j < maxY; j++){
			printf("%d ",fillMap[i][j]);
		}
		printf("\n");
	}
}
