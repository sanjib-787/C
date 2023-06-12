#include<stdio.h>
struct student{
	int roll_no;
	char name[50];
	float mark;
	float total_mark;
};
int read_data(int n, struct student s1[n]);
int print_data(int n,struct student s1[n]);
float cal_per(int mark,int total_mark);
int main(void)
{
	int n;
	struct student s1[n];
	printf("enter students no:\n");
	scanf("%d",&n);
	read_data(n,s1);
	print_data(n,s1);
	return 0;
	
}
int read_data(int n, struct student s1[n])
{
	for(int i=0;i<n;i++){
		printf("Roll No:");
		scanf("%d",&s1[i].roll_no);
		printf("Name:");
		scanf("%s",s1[i].name);
		printf("mark:");
		scanf("%f",&s1[i].mark);
		printf("total_mark:");
		scanf("%f",&s1[i].total_mark);
	}
}
int print_data(int n,struct student s1[n])
{
	printf("Roll No\tName\tMark\t\tpercentage\n");
	for(int i=0;i<n;i++){
		printf("%d\t",s1[i].roll_no);
		printf("%s\t",s1[i].name);
		printf("%f\t",s1[i].mark);
		printf("%f\t",cal_per(s1[i].mark,s1[i].total_mark));
		printf("\n");
	}
}
float cal_per(int mark,int total_mark)
{
	float per;
	per=(mark*100)/total_mark;
	return per;
}
