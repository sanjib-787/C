#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int *arr;
	int n, temp;
	printf("enter how many array elements u want:\n");
	scanf("%d",&n);
	arr = (int *)malloc(sizeof(int) * n);
	printf("array elements are:\n");
	for(int i = 0; i < n; i++) {
		scanf("%d", arr+i);
	}
	temp = *(arr + 0);
	for(int i = 0; i < n-1; i++) {
		*(arr+i) = *(arr+i+1);
	}
	*(arr + (n - 1)) = temp;
	for(int i = 0; i < n; i++) {
		printf("%d ", *(arr+i));
	}
	printf("\n");
	return 0;
}
