#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 100
int main( void )
{
	char *str1 = NULL;
	char **str2 = NULL;
	char **temp = NULL;
	int j = 0, k = 0;
	str1 = (char *)malloc(sizeof(char) * SIZE);
	printf("enter a sentence to delete duplicate word:\n");
	fgets(str1,SIZE,stdin);
	*(str1+(strlen(str1)-1)) = '\0';
	str2 = (char **)malloc(sizeof(char *) * SIZE);
	for(int i = 0; i < 10; i++ ) {
		*(str2+i) = (char *)malloc(sizeof(char) * SIZE);
	}
	temp = str2;
	printf("str---- = %p\n",*temp);
	while(*(str1) != '\0') {
//		for(int i = 0; i < 2; i++) {
//			for(int j = 0; j < 5; j++) {
				if(*str1 == ' ') {
					//*(*(str2+i)+j) = '\0';
					**str2= '\0';
					*(str2++);
					printf("sp %p\n",*str2);
					printf("spppppp %p\n",str2);
//					temp = *(str2);
//					printf("temp %s\n", temp);

				} else {
					//*(*(str2+i)+j) = *str1++;
					*(*(str2)) = *str1;
					printf("%c",*(*(str2)));
					printf("%p\n",(*(str2)));
					*(*(str2))++;
				}
				str1++;
//				printf("%c",*(*(str2+i)+j));
//			}
//		}
	}
	//while(**str2 != '\0'){i
	printf("str = %s\n",*temp);
	printf("str_2 = %s\n", *(temp + 1 ));
	//}
}
