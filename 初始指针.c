#include <stdio.h>
int main()
{
	int a=1;
	printf("%p\n",&a);
	printf("%d\n",a);
	int * pa=&a;
	*pa=2;
		printf("%d\n",a);
		printf("%d\n",sizeof(int*));
		printf("%d\n",sizeof(char*));
	return 0;
}
