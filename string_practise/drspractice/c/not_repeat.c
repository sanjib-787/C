#include<stdio.h>
int main(void)
{
	int arr[10], count = 10, flag = 0;
	for(int i = 0; i < 10; i++){
		scanf("%d",&arr[i]);
	}
	for(int i = 0; i < 10; i++){
		flag = 0;
		for(int j = i+1; j < 10; j++){
			if(arr[i] == arr[j]){
				count--;;
			} else{
				flag = 1;
			}
		}
		/*if(flag == 1){
			count++;
		}*/
	}
	printf("count: %d\n",count);
}
