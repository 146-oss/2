#include <stdio.h>
int pan(int y){
	if((y%400==0)||(y%4==0&&y%100!=0)){
		return 1;
	}
	else{
		return 0;
	}
}
int main(){
	int y;
	scanf("%d",&y);
	if(pan(y)){
		printf("%d������",y);
	}
	else{
		printf("%d��������",y);
	}
	return 0;
}
