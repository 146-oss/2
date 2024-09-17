#include <stdio.h>
int main(){
	int i=0;
	for(i=0;i<10;i++){
		if(i=5){//注意赋值符号与等号的区别 
			printf("%d",i);
		}
	}
	return 0;
}
