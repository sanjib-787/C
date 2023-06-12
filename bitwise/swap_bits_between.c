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
unsigned int swap_bits_between (unsigned int snum, unsigned int dnum, unsigned int s, unsigned int d)
{
	unsigned int temp;
	temp = snum;
	//snum = ((((dnum >> d)<<31)>>31-s) ^ snum);
	snum = (((snum >> d)&1)<<s) ^ snum;
	dnum = (((dnum >> s)&1)<<d) ^ dnum;
//	dnum = ((((temp >> s)<<31)>>31-d) ^ dnum);
	printf("%x\n",snum);
	bin_rep(snum);
	printf("%x\n",dnum);
	bin_rep(dnum);
	return snum;
}
int main(void)
{
	unsigned int snum,dnum, s, d;
	printf("enter snum:\n");
	scanf("%x",&snum);
	printf("enter dnum:\n");
	scanf("%x",&dnum);
	printf("enter first pos:\n");
	scanf("%d",&s);
	printf("enter second pos:\n");
	scanf("%d",&d);
	bin_rep(snum);
	bin_rep(dnum);
	swap_bits_between(snum, dnum, s, d);
	return 0;
}
