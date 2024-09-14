#include <stdio.h>
int main(){
		int i=0;
	int n=0;
	int a=1;
	int sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		a=a*i;
		sum=sum+a;
	}
	printf("%d",sum);
	return 0;
}
