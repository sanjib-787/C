#include"../../hdr/header.h"
int char_num(char ch)
{
	if(ch == '-'){
		return ch;
	}
	if(ch >= 48 && ch <= 57){
		int num = ch - '0';
		return num;
	} else {
		printf("please enter valid number.\n");
		exit(EXIT_FAILURE);
	} 
}
int str_int(char *cptr) 
{
	int num1 = 0, num2;
	for(int i = 0; i < strlen(cptr); i++) {
		num2 = char_num(*(cptr+i));
		num1 = num1 * 10 + num2;
	}
	return num1;
}
int add(int a, int b)
{
	return a + b;
}
int sub(int a, int b)
{
	return a - b;
}
int mul(int a, int b)
{
	return a * b;
}
int division(int a, int b)
{	
	if(b == 0) {
		printf("floating point exception Error \n");
	} else {
		return a / b;
	}
}
int mod(int a, int b)
{
	return a % b;
}
int main(int argc, char **argv)
{
	int var1, var2, result;
	char op;
//	printf("argc %d\n", argc);
//	printf("operation %c\n", *(*(argv+2)));
//	exit ( EXIT_FAILURE );
	if(argc != 4){
		printf("give 4 arguments only\n");
	} else {
		var1 = str_int(*(argv+1));
		var2 = str_int(*(argv+3));
//		printf("%d\n",strlen(*(argv+2)));
		op = *(*(argv+2));
		printf("var1 %d\n", var1);
		printf("var2 %d\n", var2);
		printf("operation %c\n", op);
/*		if (op == *){
			printf("please give with in single quote.");
		}*/
		switch(op){
			case '+':
				result = add(var1, var2);
				printf("%d + %d = %d\n",var1, var2, result);
				break;
			case '-':
				result = sub(var1, var2);
				printf("%d - %d = %d\n",var1, var2, result);
				break;
			case '*':
				result = mul(var1, var2);
				printf("%d * %d = %d\n",var1, var2, result);
				break;
			case '/':
				result = division(var1, var2);
				printf("%d / %d = %d\n",var1, var2, result);
				break;
			case '%':
				result = mod(var1, var2);
				printf("%d %% %d = %d\n",var1, var2, result);
				break;
			default:
				printf("invalid operation\n");
		}
	}
	return 0;
}
