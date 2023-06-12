#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int main(void)
{
	int arr[SIZE], fr[SIZE], n, visit = -1;
	printf("enter number of elements\n");
	scanf("%d", &n);
	printf("array elements are:\n");
	for(int i = 0; i < n; i++) {
		printf("arr[%d]: ",i);
		scanf("%d", &arr[i]);
	}
	for(int i = 0; i < n; i++) {
		int count = 1;
		for(int j = i + 1; j < n; j++) {
			if(arr[i] == arr[j]) {
				count++;
				fr[j] = visit;
			}
		}
		if(fr[i] != visit){
			fr[i] = count;
		}
	}
	for(int i = 0; i < n; i++) {
		if(fr[i] != visit) {
			printf("%d = %d\n",arr[i],fr[i]);
		}
	}
	printf("\n");
}
