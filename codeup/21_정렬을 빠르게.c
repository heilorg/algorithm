#include <stdio.h> 
void quick_sort(int *data, int start, int end){
    if(start >= end){
        return; 
    }
    
    int pivot = start;
    int i = pivot + 1; 
    int j = end;
    int temp;
    
    while(i <= j){
        while(i <= end && data[i] <= data[pivot]){
            i++;
        }
        while(j > start && data[j] >= data[pivot]){
            j--;
        }
        
        if(i > j){
            temp = data[j];
            data[j] = data[pivot];
            data[pivot] = temp;
        }else{
            temp = data[i];
            data[i] = data[j];
            data[j] = temp;
        }
    } 
    quick_sort(data, start, j - 1);
    quick_sort(data, j + 1, end);
}
 
int main(void){
	int no, i;
	scanf("%d", &no);
	int data[no];
	for(i = 0; i < no; i++)
		scanf("%d", &data[i]);
	
	
	
    quick_sort(data, 0, no - 1);
    
    for(i = 0; i < no; i++){
        printf("%d ", data[i]);
    }
    
    return 0;
}
