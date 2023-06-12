#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	char arr[3][6] = {"hii","hello","sanjib"};
	char *cptr = &arr[0][0];
	char **ptr = &cptr;
//	cptr = ( char ** ) malloc ( sizeof(char * ));
//	printf("%s\n",cptr);
	printf("cptr %s\n",cptr);
	printf("*ptr %s\n",*ptr);
	printf("ptr+0 %s\n",*(ptr+0));
	(*ptr++;
	printf("ptr+1 %s\n",*(ptr+1));
//	printf("ptr+2 %s\n",*(ptr+2));
	printf("*cptr %c\n",*cptr);
	printf("**ptr %c\n",**ptr);
	//printf("%c\n",**cptr);
}
