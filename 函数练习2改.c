#include <stdio.h>
int pan(int n){//不写函数类型默认返回整形 
	if((n%400==0)||(n%4==0&&n%100!=0)){
		return 1;
	}
	else
	return 0;
}
int main(){
	int  y=0;
	for(y=1000;y<=2000;y++){ 
		if(pan(y)){
			printf("%d ",y);
		}
	}
	return 0;
}
