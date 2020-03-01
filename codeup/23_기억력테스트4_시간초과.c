#include<stdio.h>
main(){
	int no, qrow, i, j, flag;
	
	scanf("%d", &no);
	int num[no];
	
	for(i = 0; i < no; i++){
		scanf("%d", &num[i]);
	}
	
	scanf("%d", &qrow);
	int q[qrow];
	int result[qrow];
	
	for(i = 0; i < qrow; i++){
		scanf("%d", &q[i]);
	}
	
	for(i = 0; i < qrow; i++){
		flag = no + 1;
		for(j = 0; j < no; j++){
			if(q[i] == num[j]){
				flag = j;
			}
		}
		if(flag == no + 1)result[i] = -1;
		else result[i] = flag + 1;
	}
	
	for(i = 0; i < qrow; i++){
		printf("%d ", result[i]);
	}
}
