#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	char input[20]={0};
	system("shutdown -s -t -60");
again:	
	printf("请输入，我是猪，不然电脑关机。");
	scanf("%s",input);
	if(strcmp(input,"我是猪")==0){
		system("shutdown -a"); 
		printf("关机已停止");
	}
	else{
		goto again;
	}
	return 0;
}
