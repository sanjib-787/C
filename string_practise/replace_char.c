#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 100
char *replace_char(char *cptr);
int main(void)
{
	char *cptr;
	cptr = (char *)malloc(sizeof(char) * SIZE); 
	printf("enter str:\n");
	fgets(cptr, SIZE, stdin);
	*(cptr + (strlen(cptr)-1)) = '\0';
	replace_char(cptr);
}
char *replace_char(char *cptr)
{
	char *temp = cptr;
	while(*cptr != '\0') {
		if(*cptr == 'a'){
			while(*cptr != '\0'){

				*cptr = *(cptr + 1);
				cptr++;
//			continue;
			}
		}
		cptr++;
	}

	printf("%s",temp);
}
