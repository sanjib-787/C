#include<stdio.h>
int bin_rep(unsigned int num)
{
	unsigned int i;
	for ( i = 1 << 31; i > 0; i = i >> 1 ) {
		if ( num & i ) {
			printf("1");
		} else {
			printf("0");
		}
	}
			
}
int main(void)
{

}
