#include<stdio.h>
int main(){
	int i, j;
	
	int build, moveCnt, now;
	scanf("%d %d %d", &build , &moveCnt ,&now);
	
	int move, need, umbBul[build], umb = 0, umbCnt = 0;
	
	for(i = 0; i < build; i++){
		umbBul[i] = 0;
	}
	for(i = 0; i < moveCnt; i++){
		if(umb == 1){
			umbBul[now - 1] += 1;
			umb = 0;
		}
		scanf("%d %d", &move, &need);
		
		if(need == 1){
			if(umbBul[now - 1] > 0){
				umbBul[now - 1] -= 1;
			}
			umb = 1;
		}
		now = move;
	}
	if(umb == 1){
		umbBul[now - 1] += 1;
		umb = 0;
	}
	
	for(i = 0; i < build; i++){
		umbCnt += umbBul[i];
	}
	
	printf("%d", umbCnt);
}
