#include <stdio.h>
int fei(int n)
{
	int a=1;
	int b=1;
	int c=1;
	
	while(n>2){
		c=a+b;
		a=b;
		b=c;
		n--;
		
	}
	return c;
}
int main(){
	int n=0;
	scanf("%d",&n);
	int ret=fei(n);
	printf("%d\n",ret);
	return 0;
}
