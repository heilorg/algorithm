#include<stdio.h>
int houseCnt, road;
int cnt = 100001, maxX = 0, maxY = 0, minY = 200000000;
void getRoad(int x, int y, int house[][2], int ct, int log){
	int i, j = 0, way[houseCnt], k, logplus = 0;
	
	printf("%d %d\n", x, maxX);
	if(x > maxX){
		printf("%d", log);
		if(log == road){
			if(cnt > ct)cnt = ct;	
		}
		return;
	}
	for(i = 0; i < houseCnt; i++){
		if(house[i][0] == x){
			way[j] = house[i][1];
			j += 1;
		}
	}
	
	if(j == 0){
		getRoad(x + 1, y, house, ct, log);
	}else{
		for(i = minY; i < maxY; i++){
			printf("%d => ", i);
			logplus = 0;
			for(k = 0; k < j; k++){
				printf("%d ", way[k]);
				if(i == way[k])continue;
				if(way[k] - road <= i && i <= way[k] + road){
					logplus += 1;
					if(i == y){
						getRoad(x + 1, i, house, ct, log + logplus);
					}else{
						getRoad(x + 1, i, house, ct + 1, log + logplus);
					}
				}
			}
			printf("\n");
		}
	}
}

int main(){
	int i;
	
	scanf("%d %d", &houseCnt, &road);
	int house[houseCnt][2];
	
	for(i = 0; i < houseCnt; i++){
		scanf("%d %d", &house[i][0], &house[i][1]);
		if(minY > house[i][1])
			minY = house[i][1];
		if(maxY < house[i][1])
			maxY = house[i][1] + road;
		if(maxX < house[i][0])
			maxX = house[i][0];
	}
	
//	for(i = minY; i < maxY; i++){
		i = 3;
		getRoad(0, i, house, 1, 0);
//	}
	
 	printf("%d", cnt);
}
