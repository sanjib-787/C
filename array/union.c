#include<stdio.h>
#include<stdlib.h>
int bubble_sort(int *arr, int n);
int remove_duplicate(int *arr, int n);
int swap(int *var1, int *var2);
int main(void)
{
	int *arr1, *arr2, *uni;
	int n;
	printf("enter n:\n");
	scanf("%d",&n);
	arr1 = (int *)malloc(sizeof(int) * n);
	arr2 = (int *)malloc(sizeof(int) * n);
	uni = (int *)malloc(sizeof(int) * n * 2);
	printf("arr1[%d]:\n", n);
	for(int i = 0; i < n; i++){
		scanf("%d",arr1+i);
	}
	printf("arr2[%d]:\n", n);
	for(int i = 0; i < n; i++){
		scanf("%d",arr2+i);
	}
	bubble_sort(arr1,n);
	bubble_sort(arr2,n);
	for(int i = 0; i < n; i++){
		*(uni+i) = *(arr1+i);
	}
	for(int i = 0; i < n; i++){
		*(uni + n + i) = *(arr2 + i);
	}
	printf("\n");
	printf("before\n");
	for(int i = 0; i < n*2; i++){
		printf("%d ",*(uni + i));
	}
	printf("\n");
	int a = remove_duplicate(uni,n*2);
	printf("after\n");
	for(int i = 0; i < a; i++){
		printf("%d ",*(uni + i));
	}
	printf("\n");
	return 0;
}
int remove_duplicate(int *arr, int n)
{
	int temp;
	for(int i = 0; i < n; i++) {
		temp = *(arr + i);
		for(int j = i+1 ; j < n; j++) {
			if(temp == *(arr+j)){
				for(int k = j; k < n; k++){
					*(arr + k) = *(arr + k + 1);
				}
				n--;
				j--;
			}
		}
	}
	return n;
}
