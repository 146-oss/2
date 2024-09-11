#include <stdio.h>
int main(){
	int a=0;
	scanf("%d",&a);
	if(a!=3){
		printf("输入数据不对\n");
	}
	printf("%d\n",sizeof(a));
	printf("%p\n",&a);
	return 0;
}
