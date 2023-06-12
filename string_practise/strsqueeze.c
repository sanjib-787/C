#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 100
char *strsqueeze(char *str)
{
	char *temp, *temp1;
	int count = 0;
	temp = str;
	temp++;
	while(*str != '\0') {
		if(*str == *temp){
//			*str = *(str+1);
			str++;
			temp++;
		} else{
			printf("%c",*str);
			*str = *(str+1);
			str++;
			temp++;
		}

	}
//	printf("str is %s\n",temp);
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
