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
unsigned int toggle_odd_bits(unsigned int num)
{
	unsigned int count = 0,res = 0;
	for(unsigned int temp = num; temp > 0; temp >>= 1 ){
		if(count % 2 == 1) {
			res = res | (1 << count);
		}
		count++;
	}
	bin_rep(res);
	return res;
}
int main(void)
{
	unsigned int num;
	printf("enter a number:\n");
	scanf("%x",&num);
	bin_rep(num);
	toggle_odd_bits(num);
}
