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
unsigned int swap_bits_within (unsigned int num, unsigned int s, unsigned int d)
{
	num =  ((1<<d) | (1<<s)) ^ num;
	bin_rep(num);
	return num;
}
int main(void)
{
	unsigned int num, s, d;
	printf("enter a number:\n");
	scanf("%x",&num);
	printf("enter first pos:\n");
	scanf("%d",&s);
	printf("enter second pos:\n");
	scanf("%d",&d);
	bin_rep(num);
	swap_bits_within(num,s,d);
	return 0;
}
