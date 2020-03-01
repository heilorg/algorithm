#include<stdio.h>
main(){
	int now, result = 0, goal;
	
	scanf("%d %d", &now, &goal);
	
	goal = goal - now;
	
	if(goal < 0)
		goal = goal * -1;
		
	now = 0;
	
	
	while(now != goal){
		switch(goal - now){
			case 1:case 2:case 3:
				now += 1;
			break;
			case 4:
				now += 4;
				result += 1;	
			break;
			case 5:case 6:case 7:
				now += 5;
			break;
			case 8:
				now += 8;
				result += 2;	
			break;
			case 9:
				now += 9;
				result += 1;	
			break;
			default:
				now += 10;	
			break;
		}
		result += 1;
	}
	
	printf("%d", result);
}
