#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 100
int main(void)
{
	char *str1 = NULL;
	char *str2[SIZE];
	char *str3[SIZE];
	str1 = (char *) malloc(sizeof(char) * SIZE);
	printf("enter a sentence to delete duplicate word:\n");
	fgets(str1, SIZE, stdin);
	*(str1 +(strlen(str1)-1)) = '\0';
	for(int i = 0; i < SIZE; i++) {
		str2[i] = (char *)malloc(sizeof(char) * SIZE);
	}
	int i = 0;
	str3[0] = str2[0];
	while(*str1 != '\0') {
		if(*str1 == ' ') {
			*str2[i] == '\0';
			i++;
			str3[i] = str2[i];
		} else {
			printf(" i is %d\n", i);
			*str2[i] = *str1;
			str2[i]++;
		}
			str1++;
	}
	for(int j = 0;j <= i; j++ ){
		printf("word %s\n",str3[j]);
	}
	for(int j = 0; j < i; j++) {
		for( int k = j+1; k <= i; k++ )
		if(strcmp(str3[j],str3[k]) == 0){
			str3[k] = '\0';
			printf("hii\n");
		}
	}
	for(int j = 0;j <= i; j++ ){
		printf("word %s\n",str3[j]);
	}
}

