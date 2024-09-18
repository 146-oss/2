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
	printf("最大公约数为:%d",n);
	//最小公倍数=m*n/最大公约数 / 
	return 0;
}
