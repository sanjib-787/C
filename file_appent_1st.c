#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc, char *argv[])
{
	FILE *fp, *fp1;
	int count = 0;
	char str[50], str1[50], ch;
	fp = fopen("megafile.txt", "r+");
	if( fp == NULL ) {
		printf("error in opening");
		exit(EXIT_FAILURE);
	}
	if( argc <= 2 && argc > 3) {
		printf(" no enough number of arguments: Please enter 3\n ");
	} else {
		fp1 = fopen(argv[1], argv[2]);
		if( fp1 == NULL ) {
			printf("error in opening");
			exit(EXIT_FAILURE);
		} else {
			while((ch = fgetc(fp)) != EOF) {
				if( ch == '\n'){		
					break;
				}	
			}

			while((fgets(str, sizeof(str), fp1)) != NULL){
				fputs(str, fp);
				bzero(str, 50);
			}	
		fclose(fp1);
		}
	fclose(fp);
	}
}
