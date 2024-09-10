#include<stdio.h>
float f;
int main(){
	int a=1;
	int b;
	int c;
	char ch='a';
	f=3;
float d;

	scanf("%d %f",&b,&d);
	c=a+b;
	d=a+d;
	printf("%d\n %d %d %0.3f %f %c\n",a,b,c,d,f,ch);
	printf("%d\n",sizeof(double));
	return 0;
}
