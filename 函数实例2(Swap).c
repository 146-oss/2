#include <stdio.h>
 void Swap(int* pa,int* pb){
 	int z=0;
 	z=*pa;
 	*pa=*pb;
 	*pb=z;
 	
 }
 int main(){
 	int a=0;
 	int b=1;
 	scanf("%d %d",&a,&b);
 	printf("����ǰ��a=%d b=%d\n",a,b);
 	Swap(&a,&b);
 	printf("������a=%d b=%d\n",a,b);
 	return 0;
 }
