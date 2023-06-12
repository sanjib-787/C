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
unsigned int set_bits(unsigned int snum, unsigned int p, unsigned int n)
{
	snum = ((snum << (32-(p+n)))>>(32 - n));
	bin_rep(snum);
}
int main(void)
{
	unsigned int snum, dnum, p, n;
	printf("enter source number (snum):\n");
	scanf("%d",&snum);
	printf("enter position number (p):\n");
	scanf("%d",&p);
	printf("enter number of bits (n):\n");
	scanf("%d",&n);
	bin_rep(snum);
	set_bits(snum, p, n);
}
