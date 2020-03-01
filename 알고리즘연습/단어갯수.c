#include<stdio.h>
#include<string.h>
char ch[2000001];
int main(){
    
    int i = 0, cnt = 0;
	char j = 0, temp = 0;
	while (1) {
		temp = j;
		j=getchar();
		if (j == 10){
			if(temp == 32){
				cnt--;
			}
			break;
		}
			
		if(j == 32){
			cnt++;
			if(i == 0){
				cnt--;
			}
		}
		i++;
	}
    printf("%d", cnt + 1);
    return 0;
}
