#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 100
int strspan(const char *s1, const char *s2 ) {
	int count = 0;
	char *temp;
	temp = s2;
	while(*s1 != '\0'){
		while(*s2 != '\0'){
			if(*s1 == *s2){
				count++;
				s2 = temp;
				break;
			} else {
				s2++;
			}
		}
		s1++;
	}
	printf("%d",count);
}
int main(void)
{
	char *s1, *s2;
	s1 = (char *) malloc(sizeof(char) * SIZE);
	s2 = (char *) malloc(sizeof(char) * SIZE);
	printf("s1:\n");
	fgets(s1,SIZE,stdin);
	printf("s2:\n");
	fgets(s2,SIZE,stdin);
	strspan(s1,s2);
}
