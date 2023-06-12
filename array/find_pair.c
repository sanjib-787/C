#include<stdio.h>
#define SIZE 10
int main(void){
	int arr[SIZE], n, sum;
	printf("enter n:\n");
	scanf("%d",&n);
	for(int i = 0; i < n; i++) {
		printf("arr[%d]: ",i);
		scanf("%d",&arr[i]);
	}
	printf("enter sum of two number find pair:\n");
	scanf("%d",&sum);
	for(int i = 0; i < n - 1; i++) {
		for(int j = i + 1; j < n; j++) {
			if(arr[i] + arr[j] == sum) {
				printf("Pair of elements can make the given sum by the value of index %d and %d\n",i,j);
			}
		}
	}
	return 0;
}
