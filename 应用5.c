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
	 	printf("�ҵ���,���ҳ�����Ϊ%c\n",arr2[mid]);
	 	break;
	 }
 	
	 }
	 if(left>right){
 		printf("û�ҵ���Ҫ�ҵ�����\n");
	 }
 }
int main(){
	char arr1[100]={0};
	printf("������Ҫ���ҵ��ַ���\n");
	getchar();
	scanf("%s",&arr1);
	char c=0;

	printf("������Ҫ���ҵ�����\n");
	getchar();
	scanf("%c",&c);
	cha(arr1,c);

	return 0;
} 
