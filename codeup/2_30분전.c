#include<stdio.h>
main(){
	int hour, minute;
	
	scanf("%d %d", &hour, &minute);
	
	if(minute < 30){
		if(hour == 0){
			hour = 24;
		}
		hour -= 1;
		minute += 60;
	}
	minute -= 30;
	printf("%d %d", hour, minute);
} 
