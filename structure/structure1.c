#include<stdio.h>
#pragma pack(2)
struct number{
	char a;
	int x;
	char c;

};
int main()
{
	printf("%ld\n",sizeof(struct number));
	/*struct number n1,n2;
	printf("enter number:\n");
	scanf("%d%d%d",&n1.x,&n1.y,&n1.z);
	printf("enter n2.y");
	scanf("%d",&n2.y);
	printf("%d\t%d\t%d\n",n1.x,n1.y,n1.z);
	printf("%d\t%d\t%d\n",n2.x,n2.y,n2.z);*/
}
