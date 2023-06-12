#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct studentrecords{
	int id;
	char name[50];
	char dob;
	float score[5];

};
void getNextRecord(int n, struct studentrecords s,FILE *fp)
{
	char sname[20];
	for( int i = 0 ; i < n ; i++ ){
		printf( "enter id:" );
		scanf( "%d", &s.id );
		fprintf( fp, "%d\t", s.id );
		sprintf( sname, "%d", s.id );
		printf( "enter name:" );
		scanf( "%s", s.name );
		fprintf(fp, "%s\t", strcat( s.name, sname ) );
		for( int j = 0 ; i < 5 ; i++ ){
			s.score[i] = rand() % (0,100);
			fprintf(fp,"%.2f\t",s.score[i]);
		}
		fprintf(fp,"\n");
	}
}
int main(void)
{
	int n;
	struct studentrecords s;
	FILE *fp;
	printf("enter no of records:\n");
	scanf("%d",&n);
	fp=fopen("file1.txt","a");
	if(fp==NULL){
		printf("error in opening");
		exit(0);
	}
	getNextRecord(n,s,fp);
}
