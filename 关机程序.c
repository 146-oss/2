#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	char input[20]={0};
	system("shutdown -s -t -60");
again:	
	printf("�����룬��������Ȼ���Թػ���");
	scanf("%s",input);
	if(strcmp(input,"������")==0){
		system("shutdown -a"); 
		printf("�ػ���ֹͣ");
	}
	else{
		goto again;
	}
	return 0;
}
