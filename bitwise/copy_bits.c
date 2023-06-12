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
unsigned int copy_bits (unsigned int snum, unsigned int dnum, unsigned int s, unsigned int d, unsigned int n)
{
	unsigned int temp1, temp2;
	snum = (((snum>>((s+1)-n))<< 31-n)>>31-(d+1));
	temp1 = ((dnum >> d+1)<<d+1);
	temp2 = ((dnum <<(31-(d-n))>>31-(d-n)));
	dnum = temp1 | temp2;
	dnum = dnum | snum;
//	bin_rep(temp1);
	bin_rep(snum);
	bin_rep(dnum);
}
int main(void)
{
	unsigned int snum,dnum, s, d, n;
	printf("enter snum:\n");
	scanf("%d",&snum);
	printf("enter dnum:\n");
	scanf("%d",&dnum);
	printf("enter source:\n");
	scanf("%d",&s);
	printf("enter destination:\n");
	scanf("%d",&d);
	printf("enter n:\n");
	scanf("%d",&n);
	bin_rep(snum);
	bin_rep(dnum);
	copy_bits(snum, dnum, s, d, n);
	return 0;
}

