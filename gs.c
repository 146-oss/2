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
		printf("%d是闰年",y);
	}
	else{
		printf("%d不是闰年",y);
	}
	return 0;
}
