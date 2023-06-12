#include<stdio.h>
#include<stdio_ext.h>
int main(int argc,char **argv)
{	
	int i = 1;
	if( argc == 1 ) {
		printf(" one more argument is required ");
	} else {
		/*for(int i = 1; i < argc; i++){
			printf("%s",*(argv+i));
		}*/
		while( i < argc ){
			__fpurge(stdin);
			fputc("%c",**(argv+i));
			i++;
		}
	}
}
