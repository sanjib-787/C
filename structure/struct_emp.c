#include<stdio.h>
#pragma pack(1)
typedef struct emp{
	int emp_id;
	char name[20];
	int mob_no;
	float salary;
};
int main(void)
{
	struct emp e1;
	e1.emp_id=1801292130;
	e1.name[20]={"sanjib"};
	e1.mob_no=7873196310;
	e1.salary=1234567;
	printf("%d",e1.emp_id);
}
