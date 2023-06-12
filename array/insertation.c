#include<stdio.h>
#include<stdlib.h>
int bubble_sort(int *arr, int n);
int remove_duplicate(int *arr, int n);
int swap(int *var1, int *var2);
int main(void)
{
	int *arr1, *arr2, *ins;
	int n, cnt = 0;
	printf("enter n:\n");
	scanf("%d",&n);
	arr1 = (int *)malloc(sizeof(int) * n);
	arr2 = (int *)malloc(sizeof(int) * n);
	ins = (int *)malloc(sizeof(int) * n);
	printf("arr1[%d]:\n", n);
	for(int i = 0; i < n; i++){
		scanf("%d",arr1+i);
	}
	printf("arr2[%d]:\n", n);
	for(int i = 0; i < n; i++){
		scanf("%d",arr2+i);
	}
//	bubble_sort(arr1,n);
//	bubble_sort(arr2,n);
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++){
			if(*(arr1 + i) == *(arr2 + j)) {
				*(ins+cnt) = *(arr1 + i);
				cnt++;
			}
		}
	}
	printf("\n");
	for(int i = 0; i < cnt; i++){
		printf("%d ",*(ins+i));
	}
	printf("\n");
}
