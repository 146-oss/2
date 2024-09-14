#include <stdio.h>
int main(){
	int sum=0;
	int n=0;
	int m=0;
	int a=1;
	int j=0;
	scanf("%d",&j);
	for(m=1;m<=j;m++){
		
			for(n=1;n<=m;n++)
			{
				a=a*n;
			}
			sum=sum+a;
			a=1;//зЂвт 
	}
	printf("%d\n",sum);

	return 0;
}
