#include <stdio.h>
int main(){
	int m;
	int n;
	scanf("%d %d",&m,&n);
	int t=0;
	while(t=m%n){
		m=n;
		n=t;
	}
	printf("���Լ��Ϊ:%d",n);
	//��С������=m*n/���Լ�� / 
	return 0;
}
