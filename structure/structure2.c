#include<stdio.h>
struct number{
	int x,y,z;
	char c[10];
};
int main(void)
{
	struct number n1[3],n2;
	struct number n4;
	n4.x=7;
	printf("%d\n",sizeof(n2.c));
	printf("%d\n",sizeof(n2));
	for(int i=0;i<3;i++){
		printf("n1[%d].x=:",i);
		scanf("%d",&n1[i].x);
		printf("n1[%d].y=:",i);
		scanf("%d",&n1[i].y);
		printf("n1[%d].z=:",i);
		scanf("%d",&n1[i].z);
	}
	for(int i=0;i<3;i++){
		printf("n1[%d].x=%d\t",i,n1[i].x);
		printf("n1[%d].x=%d\t",i,n1[i].y);
		printf("n1[%d].x=%d\t",i,n1[i].z);
		printf("\n");
	}
	printf("enter char:\n");
	scanf("%s",&n2.c);
}
