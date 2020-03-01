#include<stdio.h>
#include<string.h>
int main(){
	int i, j;
	int num;
	scanf("%d", &num);
	
	char email[num][101];
	for(i = 0; i < num; i++){
		scanf("%s", email[i]);
		int cnt = 0, flag = 1;
		for(j = 0; j < strlen(email[i]); j++){
			if( (email[i][j] >= 'A' && email[i][j] <= 'Z') 
			||  (email[i][j] >= 'a' && email[i][j] <= 'z')
			||  (email[i][j] >= '0' && email[i][j] <= '9')
			||   email[i][j] == '.' || email[i][j] == '-' || email[i][j] == '@'){}else{
				flag = 0;
			}
			if(email[i][j] == '@'){
				if(j == 0 || j == strlen(email[i]) - 1){
					flag = 0;
				}
				cnt++;
			}
			if(cnt > 1){
				flag = 0;
			}
		}
		if(cnt == 0){
			flag = 0;
		}
		if(flag){
			printf("Yes\n");
		}else{
			printf("No\n");
		}
	}
}
