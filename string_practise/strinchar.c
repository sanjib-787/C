#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 100
char *strinchar(char *str, char ch, int pos);
int main(void)
{
	char *str,ch;
	int pos;
	str = (char *) malloc(sizeof(char) * SIZE);
	printf("enter a string:\n");
	fgets(str, SIZE, stdin);
	*(str + (strlen(str) - 1 )) = '\0';
	printf("enter a char:\n");
	scanf("%c",&ch);
	getchar();
	printf("enter a number:\n");
	scanf("%d",&pos);
	strinchar(str, ch, pos);
}
char *strinchar(char *str, char ch, int pos)
{
	char *temp, ch1;
	int len = strlen(str);
	temp = str;
	int i = len - 1;
	while( *(str + i)) {
		*(str + len ) = *(str + i);
		if( i == pos){
			*(str + i) = ch;
			break;
		}
		len--;
		i--;
	}
	printf("%s\n",temp);
}

