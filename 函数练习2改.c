#include <stdio.h>
int pan(int n){//��д��������Ĭ�Ϸ������� 
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
