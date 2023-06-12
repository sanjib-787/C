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
unsigned int set_bits(unsigned int dnum, unsigned int p, unsigned int n, unsigned int snum)
{
	while(n){
		if(((dnum >> p) & 1 )!= 1) {
			dnum = (1 << p) | dnum;
		}
		p++;
		n--;
	}
	printf("----------\n");
	bin_rep(dnum);
}
int main(void)
{
	unsigned int snum, dnum, p, n;
	printf("enter source number (snum):\n");
	scanf("%x",&snum);
	printf("enter destination number (dnum):\n");
	scanf("%x",&dnum);
	printf("enter position number (p):\n");
	scanf("%d",&p);
	printf("enter number of bits (n):\n");
	scanf("%d",&n);
	bin_rep(dnum);
	set_bits(dnum, p, n, snum);
}
