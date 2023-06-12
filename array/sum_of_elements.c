#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int *arr, n, sum = 0;
	printf("enter n:\n");
	scanf("%d",&n);
	arr = (int *)malloc(sizeof(int) * n);
	printf("enter array Elements:\n");
	for(int i = 0; i < n; i++){
		printf("arr[%d]: ",i);
		scanf("%d",(arr+i));
	}
	for(int i = 0; i < n; i++){
		sum = sum + (*(arr+i));
	}
	printf("sum of all elements is %d\n",sum);

}
