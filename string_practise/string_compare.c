#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define SIZE 10
int main(void){
	char *str,*str1; 
	int len1 = 0, len2 = 0;
	printf("enter first string :\n");
	str = (char *)malloc(sizeof(char) * SIZE);
	scanf("%s",str);
	printf("enter 2nd string :\n");
	str1 = (char *)malloc(sizeof(char) * SIZE);
	scanf("%s",str1);
	if( strlen(str) == strlen(str1) ){
		while(*str != '\0' && *str1 != '\0'){
			if(*str == *str1){
				str++;
				str1++;
				if ( *str == '\0' && *str1 == '\0'){
					return 0;
				}
			} else if( *str > *str1) {
				printf("greater");
				return 1;
			} else {
				printf("less");
				return -1;
			}
		}
	} else {
		while(*str != '\0' && *str1 != '\0'){
			if(*str == *str1){
				str++;
				str1++;

			} else if( *str > *str1) {
				printf("greater");
				return 1;
			} else {
				printf("less");
				return -1;	
			}
		}
	}
}
