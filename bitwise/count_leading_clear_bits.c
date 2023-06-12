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
unsigned int count_leading_clear_bits(unsigned int num)
{
	unsigned int count = 0, size = 32;
	while(num) {
		if((1 << size-1) & num >= 1 ){
			break;
		}
		size--;
	}
	printf("%d\n",count);
	return count;
}
int main(void)
{
	unsigned int num,n;
	printf("enter a number:\n");
	scanf("%x",&num);
	bin_rep(num);
	count_leading_clear_bits(num);
}
