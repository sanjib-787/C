#include<stdio.h>
unsigned int bin_rep(unsigned int num)
{
	int res, temp = 1;
	for(int i = 31;i >= 0;i--){
		res = num >> i;
		if(res & 1){
			printf("1");
		} else {
			printf("0");
		}
	}
	printf("\n");
	return 0;
}
unsigned int invert( unsigned int x, int p, int n)
{
	unsigned int res;
	int len = p + 1;
	if(n > p){
		return -1;
	} else {
		res = (((~((x >> (len - n)) << 32 - n)) >> 32 - n) << (len -n))| ((x >> len)<< len) | ((x << 32 - (len - n))>>32 - (len -n ));
		bin_rep(x);
		bin_rep(res);
		printf("%d\n",res);
		return res;
	}
}
int main(void)
{
	unsigned int x;
	int p, n;
	printf("enter a number to invert:\n");
	scanf("%d", &x);
	printf("enter posintion:\n");
	scanf("%d", &p);
	printf("enter how many bit:\n");
	scanf("%d", &n);
	invert(x, p, n);

}
