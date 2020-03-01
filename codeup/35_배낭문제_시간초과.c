#include<stdio.h>

int product;
int weight;
int max;
struct arr{
	int weight;
	int price;
}arr[101];

void pick(int num, int root[]){
	if(product <= num){
		int i;
		int sum = arr[root[0]].price;
		int sumWeight = arr[root[0]].weight;
		for(i = 1; i < product; i++){
			if(sumWeight + arr[root[i]].weight > weight)break;
			sumWeight = sumWeight + arr[root[i]].weight;
			sum = sum + arr[root[i]].price;
		}
		if(sum > max)max = sum;
	}else{
		int i, j;
		for(i = 0; i < product; i++){
			int flag = 0;
			for(j = 0; j < num; j++){
				if(root[j] == i)flag = 1;
			}
			if(flag == 0){
				root[num] = i;
				pick(num + 1, root);	
			}
		}
	}
}


main(){
	
	scanf("%d %d", &product, &weight);
	
	int i;
	
	for(i = 0; i < product; i++){
		scanf("%d %d", &arr[i].weight, &arr[i].price);
	}
	
	int root[product];
	pick(0, root);
		
	printf("%d", max);
}
