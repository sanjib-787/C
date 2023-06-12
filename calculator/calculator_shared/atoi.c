#include <stdio.h>
#include<stdlib.h>
int atoi1(char *ch)
{
    int res;
    int sign = 1;
    int res1 = 0;
	if(*ch == '+'){
        sign = 1;
        ch++;
    }
    else if(*ch == '-'){
        sign = -1;
        ch++;
    }
    while(*ch != '\0'){
        if(*ch >= 48 && *ch <= 57){
            res = (int) *ch;
            res = res - 48;
            res1 = (res1 * 10) + res;
            ch++;
        }
        else{
            if(res1 != 0){
                return sign * res1;
            }
            return 0;
            break;
        }
    }
    res1 = sign * res1;
    return  res1;
}
