#include<stdio.h>
#include<stdio_ext.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 100
int main(void)
{
	char **cptr, *temp;
	int n, cnt, len1,len2;
	printf("enter how many strings:\n");
	scanf("%d",&n);
	cptr = (char **) malloc(sizeof(char *) * n);
	for(int i=0; i < n; i++){
		*(cptr+i) = (char *) malloc(sizeof(char)* SIZE);
		printf("*cptr[%d]: ",i);
		__fpurge(stdin);
		fgets(*(cptr+i), SIZE, stdin);
		*(*(cptr + i) + (strlen(*(cptr+i)) - 1)) = '\0';
	}	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n-1-i; j++){
			cnt = strcmp(*(cptr + j ),*(cptr + j + 1));
			if(cnt > 0){
				temp = *(cptr + j);
				*(cptr+j) = *(cptr+j+1);
				*(cptr+j+1) = temp;
			}
		}
	}
	printf("after sort:\n");
	for(int i=0; i < n; i++){
		printf("%s  ", *(cptr+i));
	}
	printf("\n");
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n-1-i; j++){
			len1 = strlen(*(cptr + j));
			len2 = strlen(*(cptr+j+1));
			if(len1 > len2){
				temp = *(cptr + j);
				*(cptr+j) = *(cptr+j+1);
				*(cptr+j+1) = temp;
			}
		}
	}
	printf("shortest string %s\n", *(cptr+0));
	printf("longest string %s\n", *(cptr+n-1));
/*	for(int i=0; i < n; i++){
		cnt = strlen(*(cptr+i));
		if(strlen(*(cptr+i)) > strlen(*(cptr + i + 1))){
			cnt = strlen(*(cptr+i));
		}
	}*/
}
