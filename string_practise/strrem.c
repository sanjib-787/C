#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 100
char *strrem1(char *str1, char *str2);
int main(void)
{
	char *str1, *str2;
	str1 = (char *)malloc(sizeof(char) * SIZE);
	str2 = (char *)malloc(sizeof(char) * SIZE);
	printf("enter a string:\n");
	fgets(str1, SIZE, stdin);
	*(str1 +(strlen(str1)-1)) = '\0';
	printf("enter a string:\n");
	fgets(str2, SIZE, stdin);
	*(str2 + (strlen(str2) - 1)) = '\0';
	strrem1(str1,str2);
}
char *strrem1(char *str1, char *str2)
{
	int i = 0, j = 0, k = 0,flag =0, len1, len2;
	len1 = strlen(str1);
	len2 = strlen(str2);
	for(i = 0; i < len1; i++){
		k = i;
		for(j = 0; j < len2; j++){
			if(*(str1 + i) == *(str2 + j)) {
				i++;
			}
		}
		flag = k - i;
		if( flag == len2){
			i = k;
			for(j = i; j < len1-len2; j++ ) {
				*(str1 + j) = *(str1 + j + len2);
			}
			*(str1+j)='\0';
		}
	}
	printf("%s\n",str1);
}
