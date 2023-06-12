#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define SIZE 100
char * rev_word(char *str);
int main(void)
{
	char *str = NULL;
	str = (char *) malloc (sizeof(char) * SIZE);
	printf("enter a sentence:\n");
	fgets(str, SIZE, stdin);
	*(str + (strlen(str)-1))='\0';
	rev_word(str);
	free(str);
}
char * rev_word(char *str)
{
	char *temp = NULL;
	int j = 0;
	int len = strlen(str);
	temp = (char *)malloc(sizeof(char) * SIZE);
	for(int i = 0; i < len; i++){
		for(j = 0; j < len; j++, i++) {
			if(*(str + i )==' ' || *(str + i)=='\0') {
				break;
				}
			*(temp + j) = *(str + i);
			}
			while(j > 0){
				j--;
				*(str + (i-j-1)) = *(temp+j);
			}
	}
	printf("%s\n", str);
	return str;

}
