#include <stdio.h>
#include <string.h>
int main(){
	int i=0;//假设密码为123456 
	char password[20]={0};//注意字符定义的长度不能为空。 
	for(i=0;i<3;i++){
		printf("请输入密码:>");
		scanf("%s",password);
		if(strcmp(password,"123456")==0)
		{
			printf("密码正确\n");
			break;
		}
		else
		{
			printf("密码错误，请重新输入\n");
		}
	}
	if(i==3){
		printf("输出次数超三次，强制退出\n");
	}
	return 0;
}
