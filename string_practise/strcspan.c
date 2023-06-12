#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 100
int strcspan(const char *s1, const char *s2 ) {
	int count = 0;
	char *temp;
	temp = s2;
	while(*s1 != '\0'){
		while(*s2 != '\0') {
			if(*s1 == *s2){
				return count;
				break;
			}
			s2++;
		}
		count++;
		s2 = temp;
		s1++;
	}
	return count;
}
int main(void)
{
	char *s1, *s2;
	s1 = (char *) malloc(sizeof(char) * SIZE);
	s2 = (char *) malloc(sizeof(char) * SIZE);
	printf("s1:\n");
	fgets(s1,SIZE,stdin);
	*(s1 + (strlen(s1) - 1)) = '\0';
	printf("s2:\n");
	fgets(s2,SIZE,stdin);
	*(s2 + (strlen(s2) - 1)) = '\0';
	printf("%d\n", strcspan(s1,s2));
}
