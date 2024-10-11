#include <stdio.h>
int main(){
	int a[3]={0};//注意引用数组与定义数组时的【】内不同。 
	scanf("%d %d %d",&a[0],&a[1],&a[2]);
	int t=0;
	int i=0;
	if(a[0]<a[1])
	{
		t=a[0];
		a[0]=a[1];
		a[1]=t;
	}
	if(a[0]<a[2])
	{
		t=a[0];
		a[0]=a[2];
		a[2]=t;
	}
	if(a[1]<a[2])
	{
		t=a[1];
		a[1]=a[2];
		a[2]=t;
	}
	for(i=0;i<=2;i++){
		printf("%d ",a[i]);
	}
	return 0;
} 
