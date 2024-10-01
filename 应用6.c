#include <stdio.h>
int main(){
	char arr[20]="hello world";
	memset(arr,65,5);
	printf("%s\n",arr);
	return 0;
}
