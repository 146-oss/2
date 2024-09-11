#include <stdio.h>
int main(){
	int a=0;
	while(a<11){
		add();
		a++;
	}
	return 0;
}
void add(){
	static int b=2;
	printf("%d ",b);
	b++;
}
