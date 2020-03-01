#include<stdio.h>
#include<string.h>
int main(){
	char text[1000];
	
	scanf("%s", &text);
	
	if(strlen(text) < 8 || strlen(text) > 15){
		printf("invalid");
		return 0;
	}
	
	int i;
	int bc = 0, sc = 0, nc = 0, cc = 0;
	for(i = 0; i < strlen(text); i++){
		if(text[i] >= 'A' && text[i] <= 'Z'){
			bc++;
		}else if(text[i] >= 'a' && text[i] <= 'z'){
			sc++;
		}else if(text[i] >= '0' && text[i] <= '9'){
			nc++;
		}else {
			cc++;
		}
	}
	if(bc>0&&sc>0&&nc>0&&cc>0){
		printf("valid");
		return 0;
	}else{
		printf("invalid");
		return 0;
	}
	
	
}
