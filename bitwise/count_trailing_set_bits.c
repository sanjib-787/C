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
unsigned int count_trailing_set_bits(unsigned int num)
{
	unsigned int size = 0, count = 0; 
	while(num){
		if((1<<size) & num ){
			count++;
		} else {
			break;
		}
		size++;
	}
	printf("%d\n",count);
	return count;
}
int main(void)
{
	unsigned int num,n;
	printf("enter a number:\n");
	scanf("%x", &num);
	bin_rep(num);
	count_trailing_set_bits(num);
}
