#include<stdio.h>
main(){
	int no, num[100], i, flag;
	
	scanf("%d", &no);
	for(i = 0; i < no; i++){
		scanf("%d", &num[i]);
	}
	flag = 1;
	for(i = 0; i < no - 1; i++)
		if(num[i] != num[i + 1])flag = 0;
		
	if(flag == 1){
		printf("����");
		return 0; 
	}
	
	
	
	flag = 1;
	for(i = 0; i < no - 1; i++)
		if(num[i] > num[i + 1])flag = 0;
		
	if(flag == 1){
		printf("��������");
		return 0; 
	}
	
	flag = 1;
	for(i = 0; i < no - 1; i++)
		if(num[i] < num[i + 1])flag = 0;
		
	if(flag == 1){
		printf("��������");
		return 0; 
	}
	printf("����");
}
