#include <stdio.h>
int main()
{
	int a=3;
	int b=4;
	int sum=Add(a,b);
	printf("a+b=%d\n",sum);
	printf("%d",Add(5,6));
	return 0;
 } 
 int Add(int x,int y){
 	int z=0;
 	z=x+y;
 	return z;
 }
