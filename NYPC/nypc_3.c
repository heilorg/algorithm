#include<stdio.h>
int main(){
	int i;
	int hp, turn;
	scanf("%d %d", &hp, &turn);
	
	int action[turn], amount[turn];
	for(i = 0 ; i < turn; i++){
		scanf("%d %d", &action[i], &amount[i]);
	}
	for(i = 0 ; i < turn; i++){
		switch(action[i]){
			case 1:
				hp -= amount[i];
				break;
			case 2:
				hp += amount[i];
				break;
			case 3:
				printf("%d", hp + amount[i]);
				return 0;
				break;
		}
	}
}
