#include <stdio.h>
#include <string.h>
void reverse(const char *, int n);
int main(void)
{
    char *str = "HELLO";
	reverse(str, strlen(str));
	printf("Success\n");
	return 0;
}
void reverse(const char *str, int len)
{
	if(len) {
		printf("%c", *(str + len));
		reverse(str, len--);
	}	
	return;
}
