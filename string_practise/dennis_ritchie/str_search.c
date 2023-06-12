#include<stdio.h>
#include<stdio_ext.h>
#include<string.h>
#include<stdlib.h>
#define SIZE 100
int strcomp(const char *s1, const char *s2);
int main(void)
{
	char **str;
	char *str1;
	int n,res;
	printf("enter number of elements:\n");
	scanf("%d",&n);
	str = (char **) malloc (sizeof(char *) * n);
	str1 = (char *) malloc (sizeof(char) * SIZE);
	for(int i = 0; i < n; i++ ) {
		*(str + i) = (char *) malloc(sizeof(char) * SIZE);
		printf("str%d: ",i);
		__fpurge ( stdin );
		fgets(*(str + i), SIZE, stdin);
		*((*(str+i)) + (strlen(*(str+i))-1))='\0';
	}
	printf("enter string to search:\n");
	fgets(str1, SIZE, stdin);
	*(str1 + (strlen(str1)-1)) = '\0';
	for(int i = 0; i < n; i++){
		res = strcomp(*(str+i), str1);
		if(res == 0){
			printf("res is available at %d index\n", i);
//		} else {
//			printf("not available\n");
		}
//		printf("%s\n", *(str+i));
	}
}
int strcomp(const char *s1, const char *s2)
{
	while(*s1 != '\0' && *s2 != '\0') {
		if(*s1 == *s2){
			s1++;
			s2++;
			if(*s1 == '\0' && *s2 == '\0'){
				return 0;
			}
		} else if(*s1 > *s2){
			return 1;
		} else {
			return -1;
		}
	}
}
