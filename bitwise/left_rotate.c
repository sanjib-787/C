#include<stdio.h>
unsigned int bin_rep(unsigned int num)
{
	int res,temp=1;
	for(int i=31;i>=0;i--){
		res=num>>i;
		if(res&1){
			printf("1");
		} else {
			printf("0");
		}
	}
	printf("\n");
	return 0;
}
unsigned int left_rotate(unsigned int num, unsigned int n)
{
	unsigned int temp;
	temp = (num << n) | (num >> 32-n);
	bin_rep(temp);
	return temp;
}
int main(void)
{
	unsigned int num,n;
	printf("enter a number:\n");
	scanf("%x",&num);
	printf("enter n for left rotate:\n");
	scanf("%d",&n);
	bin_rep(num);
	left_rotate(num,n);
}
