#include <stdio.h>
int main()
{
	int a=3;
	int b=4;
	int c=0;
	scanf("%d %d",&a,&b);
	if(a>5&&b<3){
		printf("ÁãÁã\n");
		
	}
	if(a>5||b<3)
	{
		printf("lll\n");
	}
	c=a>7?a+b:a-b;
	printf("%d\n",c);
	printf("%d",(a+b,a-b,a++,c=a+b,c));
	return 0;
}
