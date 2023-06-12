#include"../hdr/header.h"
#define SIZE 50
int main(void)
{
	char *cptr1, *cptr2, *cptr3, *temp1, *temp2;
	int count = 0, len;
	cptr1 = (char *)malloc(sizeof(char) * SIZE);
	cptr2 = (char *)malloc(sizeof(char) * SIZE);
	cptr3 = (char *)malloc(sizeof(char) * SIZE);
	printf("enter a line\n");
	fgets(cptr1, SIZE, stdin);
	*(cptr1 + (strlen(cptr1) -1 )) = '\0';
	printf("enter a character to be find\n");
	fgets(cptr2, SIZE, stdin);
	*(cptr2 + (strlen(cptr2) -1 )) = '\0';
	printf("enter a word to implement\n");
	fgets(cptr3, SIZE, stdin);
	*(cptr3 + (strlen(cptr3) -1 )) = '\0';
	len = strlen(cptr3);
	temp1 = cptr1;	
	temp2 = (char *)malloc(sizeof(char) * SIZE);
	/*while( *cptr1 != '\0' ){
		if( *cptr2 == *cptr1 ){
		}
	}*/
	while( *cptr1 != '\0' ){
		if( *cptr2 == *cptr1 ){
			for( int i = 0; i < count; i++ ){
				*(temp2 + i) = *(temp1 + i);
			}
			int templen = count;
//			printf("%d\n", templen);
			for( int i = 0; i < len; i++ ){
				*(temp2 + count + i ) = *(cptr3 + i);
//				printf("%s\n",temp2);
				//count++;
			}
			for(int i = count; i <= strlen(cptr1); i++){
				*(temp2 + len + i + 1) = *(temp1 + i);
//				printf("%c\n",*(temp2+len+i));
			}
		}
		count++;
//		printf("%c\n",*cptr1);
		cptr1++;
	}
	printf("%s", temp2);
	return 0;
}
