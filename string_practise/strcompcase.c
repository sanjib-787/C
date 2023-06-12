#include<stdio.h>
#include<stdlib.h>
#define SIZE 100
int strcompcase(char *s1, char *s2)
{
	while(*s1 != '\0' && *s2 != '\0') {
		if(*s1 >= 'A' && *s1 <= 'Z'){
			*s1 = *s1 + 32;
		}
		if(*s2 >= 'A' && *s2 <= 'Z'){
			*s2 = *s2 + 32;
		}
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
int main(void)
{
	char *s1,*s2;
	s1 = (char *)malloc(sizeof(char) * SIZE);
	s2 = (char *)malloc(sizeof(char) * SIZE);
	printf("enter s1:\n");
	fgets(s1,SIZE,stdin);
	printf("enter s2:\n");
	fgets(s2,SIZE,stdin);
	printf("%d\n",strcompcase(s1,s2));
}
