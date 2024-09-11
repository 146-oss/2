#include <stdio.h>
struct st{
	int a;
	char ch[20];
	int c;
};
int main()
{
	struct st d={20,"´óºÃÈË",23};
	printf("1:%d %s %d\n",d.a,d.ch,d.c);
	struct st *pd=&d;
	printf("2:%d %s %d\n",(*pd).a,(*pd).ch,(*pd).c);
	printf("3:%d %s %d\n",pd->a,pd->ch,pd->c);
	return 0;
 } 
