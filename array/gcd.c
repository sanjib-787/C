#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int n1, n2, gcd;
	printf("enter n1: ");
	scanf("%d",&n1);
	printf("enter n2: ");
	scanf("%d",&n2);
	for(int i = 1; i < n1 && i < n2; i++){
//		for(int j = 1; j < n2; j++) {
			if(n1 % i== 0 && n2 % i == 0){
				gcd = i;
			}
//		}
	}
	printf("%d",gcd);
}
