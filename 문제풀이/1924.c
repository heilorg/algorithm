#include<stdio.h>
main(){
	int m, d;
	int mtod[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	char day[21] = "SUNMONTUEWEDTHUFRISAT";
	
	scanf("%d %d", &m, &d);
	
	m--;
	int totalD = 0;
	int i;
	for(i = 0; i < m; i++){
		totalD += mtod[i];
	}
	totalD += d;
	for(i = 0; i < 3; i++)
	printf("%c", day[(totalD % 7) * 3 + i]);
}
