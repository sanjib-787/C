#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int *arr = NULL, n, temp;
	printf("enter a number:\n");
	scanf("%d",&n);
	arr = (int *)malloc(sizeof(int) * n);
	printf("enter array elements: \n");
	for(int i = 0; i < n; i++){
		printf("arr[%d]: ",i);
		scanf("%d",(arr + i));
	}
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
	printf("%d\n",n);
	for(int i = 0; i < n; i++){
		printf("%d ",*(arr + i ));
	}
}
