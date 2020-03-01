#include<stdio.h>
main(){
	int no, nn = 1, i, dump, j, arr[7] = {0};
	scanf("%d", &no);
	for(i = 0; i < no; i++)
		nn *= 2;
	for(i = 0; i < nn; i++){
		dump = i;
		for(j = 0; dump != 0; j++){
			arr[j] = dump % 2;
			dump = dump / 2;
		}
		for(j = no - 1; j >= 0; j--){
			printf("%c", arr[j] == 1 ? 'X' : 'O');
		}
		printf("\n");
	}
}
