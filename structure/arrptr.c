#include<stdio.h>
int main(void)
{
	int n;
	int *aint[n];
	printf("enter no of elements:\n");
	scanf("%d",&n);
	aint[n]=(int *)malloc(sizeof(int)*n);
	for(int i=0;i<n;i++){
		scanf("%d",aint+i);
	}
	for(int i=0;i<n;i++){
		printf("%d",*(aint+i));
	}

	return 0;
}
