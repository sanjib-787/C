
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 100
char *strsqueeze(char *str)
{
	char *temp = NULL;
	char *temp1 = NULL;
	temp = str;
	while(*str != '\0') {
		if(*str == *(str+1)){
			temp1 = str;
			while(*str != '\0') {
				*str = *(str+1);
				str++;
			}
			str = temp1;
		}
		else{
		str++;
		}
	}
	printf("%s\n",temp);
}
int main(void)
{
	char *str;
	str = (char *) malloc(sizeof(char) * SIZE);
	printf("str :\n");
	fgets(str, SIZE, stdin);
	*(str +(strlen(str)-1)) = '\0';
	strsqueeze(str);


}
