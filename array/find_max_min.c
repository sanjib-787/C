#include<stdio.h>
#define SIZE 10
int main(void) 
{
	int arr[SIZE], min, max, n;
	printf("enter n: \n");
	scanf("%d", &n);
	printf("enter array elements\n");
	for(int i = 0; i < n; i++) {
		printf("arr[%d]:", i);
		scanf("%d", &arr[i]);
	}
		min = arr[0];
		max = arr[0];
	for(int i = 0; i < n; i++) {
		for(int j = i+1; j < n; j++) {
			if( arr[j] < min ){
				min = arr[j];
			}
			if( arr[j] > max) {
				max = arr[j];
			}
		}
	}
	printf("min %d\n",min);
	printf("max %d\n",max);
}
