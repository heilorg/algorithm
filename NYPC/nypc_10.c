#include<stdio.h>
int main(){
	int people, play, i, n1, n2, j;
	
	scanf("%d %d", &people, &play);
	
	int win[people];
	int groupPer[people];
	int groupIn[people];
	int groupMax[people];
	
	for(i = 0; i < people; i++){
		win[i] = 0;
		groupPer[i] = 1;
		groupIn[i] = i;
		groupMax[i] = 0;
	}
	
	for(i = 0; i < play; i++){
		scanf("%d %d", &n1, &n2);
		n1-=1;
		n2-=1;
		win[n1] += 1;
		win[n2] -= 1;
	
		if(groupIn[n1] != groupIn[n2]){
			groupPer[groupIn[n1]] += groupPer[groupIn[n2]];
			if(groupMax[groupIn[n1]] < groupMax[groupIn[n2]]){
				groupMax[groupIn[n1]] = groupMax[groupIn[n2]];
			}
			int num = groupIn[n2];
			
			for(j = 0; j < people; j++){
				if(groupIn[j] == num)groupIn[j] = groupIn[n1];
			}
		}
		
		if(win[n1] > groupMax[groupIn[n1]])groupMax[groupIn[n1]] = win[n1];
		if(win[n2] > groupMax[groupIn[n1]])groupMax[groupIn[n1]] = win[n2];
// 		for(j = 0; j < people; j++){
//			printf("%d %d %d %d\n", win[j], groupIn[j], groupPer[groupIn[j]], groupMax[groupIn[j]]);
//		}printf("-----------------------------\n");
	}
	
	int maxPer = 0;
	for(i = 1; i < people; i++){
		if(groupPer[maxPer] < groupPer[i])maxPer = i;
	}
	int maxWin = -200000;
	int winner = -1;
	for(i = 0; i < people; i++){
		if(groupIn[i] == maxPer){
			if(maxWin < win[i]){
				maxWin = win[i];
				winner = i;
			}
		}
	}
	printf("%d", winner + 1);
}
