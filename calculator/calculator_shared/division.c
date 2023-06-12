#include<stdio.h>
int division(int a, int b)
{	
	if(b == 0) {
		printf("floating point exception Error \n");
		return -1;
	} else {
		return (a / b);
	}
}
