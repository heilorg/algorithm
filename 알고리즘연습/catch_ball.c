#include<stdio.h>
void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}
void quick(int left, int right, int* arr){
	int pivot = left;
	int i = left;
	int j = right;
	left += 1;
	
	while(left < right){
		if(b[left].size <= b[pivot].size)left+=1;
		if(b[right].size >= b[pivot].size)right-=1;
	}
	
}
struct ball{
	int nu;
	int size;
};
int main(){
	int num;
	scanf("%d", &num);
	struct ball b[num];
	int i;
	for(i = 0; i < num; i++){
		scanf("%d %d", b[i].nu, b[i].size);
	}
	
    quick(0, num - 1, &b);
	
	
}
