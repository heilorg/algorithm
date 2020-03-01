#include<stdio.h>
int main(){
	int line, sadari, i, clear, temp1, temp2, j;
	
	scanf("%d %d", &line, &sadari);
	int result[line];
	
	for(i = 0; i < line; i++)
		result[i] = i + 1;
	
	for(i = 0; i < sadari; i++){
		scanf("%d %d", &temp1, &temp2);
		for(j = 0; j < line; j++){
			if(result[j] == temp1){
				result[j] = temp2;
				continue;
			}
			if(result[j] == temp2)
				result[j] = temp1;
		}
	}
	
	scanf("%d", &clear);
	printf("%d ", result[clear - 1]);

}
