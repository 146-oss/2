#include <stdio.h>
#include <stdlib.h>
#include  <time.h>
void menu(){
	printf("##########################\n");
	printf("##########play:1##########\n");
	printf("##########exit:0##########\n");
	printf("##########################\n");
}
void game(){
	int guess=0;
		//srand(100);
		//srand((unsigned int)time(NULL));
	int ret=rand()%100+1;
	while(1){
	
	printf("������µ�����:>");
	scanf("%d",&guess);
	//printf("%d\n",ret);
	if(guess<ret){
		printf("��С��\n");
	}
	else if(guess>ret){
		printf("�´���\n");
		
	}
	else{
		printf("��ϲ�㣬�¶���\n");
		break;
	}
}
}
int main() {
	int input=0;

	srand((unsigned int)time(NULL));
	do{
		menu();
		printf("�����Ƿ�ʼ��Ϸ:");
		scanf("%d",&input);
		switch(input){
			case 1:
				game();
				break;
			case 0:
			printf("�˳���Ϸ\n");
			break;
			default:printf("�������,����������\n");
			break;	
		}
		
		
	}while(input);
	
	return 0;
}
