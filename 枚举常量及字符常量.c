#include <stdio.h>
#define max 100
enum stu
{
	a=8,
	b,
	c
}nu;
int main()
{

	enum stu num=b;
	nu=b;
	nu=3;
	printf("%d\n",nu);
	return 0;
}
/*int main()
{
	const int a=8;
enum stu num=a;
	int  c=max;
	int b[10]={0};
	b[a]=9;
	printf("%d\n",b[a]);
	printf("%d\n",c);
	printf("%d\n",num);
	return 0;
 } */
