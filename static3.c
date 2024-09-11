#include <stdio.h>
extern int add(int x,int y);
int main(){
	int a=1;
	int b=2;
	int c=add(a,b);
	printf("%d",c);
	return 0;
} 
