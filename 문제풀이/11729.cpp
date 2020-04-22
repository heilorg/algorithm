#include<bits/stdc++.h>
using namespace std;


    
int getOther(int a, int b){
    return 6 - a - b;
}
    
void addLog(int place, int move){
	printf("%d %d\n", place, move);
}
void hanoi(int block, int move, int place){ // block : 옮길 블록 // move : 옮길 위치 // place: 현재 위치
    if(block == 1){
        addLog(place, move);
    }else{
        hanoi(block - 1, getOther(move, place), place);    //나머지
        addLog(place, move);
        hanoi(block - 1, move, getOther(move, place));
    }
}
int main(){
	int num;
	cin >> num;
	printf("%d\n", ((int)pow(2.0, (double)num) - 1));
    hanoi(num, 3, 1);
}


