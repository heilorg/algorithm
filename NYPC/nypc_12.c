#include<stdio.h>
#include<string.h>
int main(){
	char text[2000000];
	scanf("%s", text);
	int start = 0, end = strlen(text), i, j, cnt = 0, num = strlen(text);
	
	
	for(i = 0; i < num; i++){
		for(j = start; j < start + num / 2; j++){
			if(text[j] != text[end - 1 - (j - start)])break;
		}
//		int d = j;
		
//		printf("%d - %d --- ", start, start + num / 2);
//		for(j = start; j < end; j++){
//			printf("%c", text[j]);
//		}
		
//		j = d;
		if(j == start + num / 2){
//			printf(" -> true");
			cnt += 1;
		}
//		printf("\n------------------\n");
		
		text[end] = text[start];
		start += 1;
		end += 1;
		
	}
	printf("%d", cnt);
}
