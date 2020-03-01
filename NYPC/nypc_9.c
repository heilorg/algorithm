#include<stdio.h>
int max = 0;
int num;

void getMax(int nu, int sum, int road[], int exp[][num], int idx){
    int i, j;
    int nr[num];
    
    for(i = 0; i < num; i++)nr[i] = road[i];
    
    nr[nu] = 0;
    
    for(i = 0; i < num; i++){
        if(nr[i]){
            sum += exp[i][nu];
            if(max < sum)max = sum;
        }
    }
    
    for(i = 0; i < num; i++){
        if(idx == num)
            return;
        else if(nr[i])
                getMax(i, sum, nr, exp, idx + 1);
            
    }
}

int main() {
    int dummy[15] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
    
    scanf("%d", &num);
    
    int exp[num][num], i, j;
    
    for(i = 0; i < num; i++){
        for(j = 0; j < num; j++){
            scanf("%d", &exp[i][j]);
        }    
    }
    
    for(i = 0; i < num; i++){
        getMax(i, 0, dummy, exp, 0);
    }
    
    printf("%d", max);
}
