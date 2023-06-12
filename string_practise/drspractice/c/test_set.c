#include<stdio.h>
int bin_rep(int num)
{
	unsigned int i;
	for(i = 1<<31; i > 0; i >>= 1) {
		if(num & i){
			printf("1");
		} else {
			printf("0");
		}
	}
	printf("\n");
}
int main (void)
{
	unsigned int num;
	printf("enter a number:\n");
	scanf("%x",&num);
	bin_rep(num);
	if((1 << 3) & num){
		num = (num << 11)>>27;
	} else {
		printf("3rd bit is not set\n");
	}
	bin_rep(num);
}
