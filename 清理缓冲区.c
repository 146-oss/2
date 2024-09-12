#include <stdio.h>
#include <string.h>
int main(){
	char password[20]={0};
	printf("请输入密码；>");
	scanf("%s",password);
	//printf("%s",password);//确认scanf函数的输出规律 
	printf("请确认密码(Y/N):>");
	//getchar();//清理单一缓冲区 （包括' ''\n') 
	int t=0;
	while((t=getchar())!='\n'){
		;
	}//清理多行缓冲区 
	int ch=getchar();
	if(ch=='Y'){
		printf("确认成功\n");
	}
	else
	{
		printf("确认失败\n");
	}
	return 0;
}
