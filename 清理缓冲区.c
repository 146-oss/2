#include <stdio.h>
#include <string.h>
int main(){
	char password[20]={0};
	printf("���������룻>");
	scanf("%s",password);
	//printf("%s",password);//ȷ��scanf������������� 
	printf("��ȷ������(Y/N):>");
	//getchar();//����һ������ ������' ''\n') 
	int t=0;
	while((t=getchar())!='\n'){
		;
	}//������л����� 
	int ch=getchar();
	if(ch=='Y'){
		printf("ȷ�ϳɹ�\n");
	}
	else
	{
		printf("ȷ��ʧ��\n");
	}
	return 0;
}
