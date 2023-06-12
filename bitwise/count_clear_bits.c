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
unsigned int count_clear_bits(unsigned int num)
{
	unsigned int count = 0;
	while(num) {
		if((num & 1) != 1){
			count++;
		}
		num = num>>1;
	}
	printf("%d\n",count);
}
int main(void)
{
	unsigned int num,n;
	printf("enter a number:\n");
	scanf("%x",&num);
	bin_rep(num);
	count_clear_bits(num);
}
