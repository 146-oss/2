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
	
	printf("请输入猜的数字:>");
	scanf("%d",&guess);
	//printf("%d\n",ret);
	if(guess<ret){
		printf("猜小了\n");
	}
	else if(guess>ret){
		printf("猜大了\n");
		
	}
	else{
		printf("恭喜你，猜对了\n");
		break;
	}
}
}
int main() {
	int input=0;

	srand((unsigned int)time(NULL));
	do{
		menu();
		printf("请问是否开始游戏:");
		scanf("%d",&input);
		switch(input){
			case 1:
				game();
				break;
			case 0:
			printf("退出游戏\n");
			break;
			default:printf("输入错误,请重新输入\n");
			break;	
		}
		
		
	}while(input);
	
	return 0;
}
