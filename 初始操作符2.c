#include <stdio.h>
int main(){
	int a=1;
	printf("%d\n",~a);
	while(a<10){
		printf("%d ",++a);
		
	}
	while(a<15)
	{
		
		printf("%d ",a++);
	}
	return 0;
}
