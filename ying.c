#include <stdio.h>
#include <string.h>
 void cha(char arr2[100],char h){
 	int left=0;
 	int right=strlen(arr2)-1;
 	while(left<=right)
{
	  	int mid=(left+right)/2;
 	if(arr2[mid]>h){
 		right=mid-1;
	 }
	 else if(arr2[mid]<h){
	 	left=mid+1;
	 }
	 else
	 {
	 	printf("找到了,查找出的数为%c\n",arr2[mid]);
	 	break;
	 }
 	
	 }
	 if(left>right){
 		printf("没找到所要找的数字\n");
	 }
 }
int main(){
	char arr1[100]={0};
	printf("请输入要查找的字符串\n");
	getchar();
	scanf("%s",&arr1);
	char c=0;

	printf("请输入要查找的数字\n");
	getchar();
	scanf("%c",&c);
	cha(arr1,c);

	return 0;
} 
