#include <stdio.h>
#include <string.h>
int main(){
	char arr1[20]={0,1};
	char arr2[20]="hello world";
	strcpy(arr1,arr2);
	printf("%s\n",arr1);
	return 0;
}
