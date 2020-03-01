#include<stdio.h>
#include<string.h>
char harmony[1001];
int num, cnt = 0;

void fun(int idx, int road[], int depth, char total[1001], int length, char sound[][1001], int totalLength){
	int i, j, flag;
	
	for(i = 0; i < strlen(sound[idx]); i++){
		total[i + length] = sound[idx][i];
	}
	
	road[depth] = idx;
	length += strlen(sound[idx]);
	depth += 1;
		
	
	if(length >= totalLength){
		if(length == totalLength){
			flag = 1;
			for(i = 0; i < totalLength; i++){
				if(total[i] != harmony[i]){
					flag = 0;
				}
			}
			if(flag == 1){
				cnt += 1;
//				for(j = 0; j < length; j++){
//					printf("%c", total[j]);
//				}

				printf("%d\n", cnt);
			}	
		}
	}else{
		for(i = 0; i < num; i++){
			fun(i, road,  + 1, total, length, sound, totalLength);
		}
	}
}

int main(){
	int i;
	scanf("%d", &num);
	
	char sound[num][1001], tt[1001];
	int log[num];
	
	for(i = 0; i < num; i++){
		scanf("%s", sound[i]);
	}
	scanf("%s", harmony);
	
	for(i = 0; i < num; i++){
		fun(i, log, 0, tt, 0, sound, strlen(harmony));
	}
	
	printf("%d", cnt % 1000000007);
	return 0;
}
