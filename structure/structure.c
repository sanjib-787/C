#include<stdio.h>
struct emp{
//	int b;
//float c;
//	double d;
//	char a;
	char a;
	int b;
	char c;
	double d;
};
int main(void)
{
	printf("%d",sizeof(struct emp));
	return 0;
}
