#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define SIZE 100
int main(void)
{
	char *cptr = NULL,*cptr1;
	cptr = (char *)malloc(sizeof(char) * SIZE);
	printf("enter a sentense:\n");
	fgets(cptr, SIZE, stdin);
	*(cptr + (strlen(cptr) - 1)) = '\0';
	if(*cptr >= 'a' && *cptr <= 'z') {
		*cptr = *cptr - 32;
	}
	cptr1 = cptr;
	while(*cptr != '\0') {
		if(*cptr == ' ') {
			if((*(cptr + 1) >= 'a') && (*(cptr + 1) <= 'z')) {
				*(cptr + 1) = *(cptr + 1) - 32;
			}
		}
		cptr++;
	}
	cptr = cptr1;
	printf("updated string is \n");
	printf("%s\n", cptr);
	free(cptr);
	return 0;
}
