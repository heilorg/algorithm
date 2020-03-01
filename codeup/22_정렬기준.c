#include<stdio.h>
void swap(int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
int main(){
	int no, i, j;
	scanf("%d", &no);
	int score[no][3];
	for(i = 0; i < no; i++){
		scanf("%d %d", &score[i][0], &score[i][1]);
		score[i][2] = i;
	}
	
	for(j = 0; j < no; j++)
		for(i = 0; i < no - 1 - j; i++){
			if(score[i][0] < score[i + 1][0]){
				swap(&score[i][0], &score[i + 1][0]);
				swap(&score[i][1], &score[i + 1][1]);
				swap(&score[i][2], &score[i + 1][2]);
			}
		}
	
	for(j = 0; j < no; j++)
		for(i = 0; i < no - 1 - j; i++){
			if(score[i][0] == score[i + 1][0] && score[i][1] < score[i + 1][1]){
				swap(&score[i][0], &score[i + 1][0]);
				swap(&score[i][1], &score[i + 1][1]);
				swap(&score[i][2], &score[i + 1][2]);
			}
		}
	
	
	for(i = 0; i < no; i++){
		printf("%d %d %d\n", score[i][2] + 1, score[i][0], score[i][1]);
	}
}
