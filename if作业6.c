#include <stdio.h>
int main(){
	int m;
	int n;
	scanf("%d %d",&m,&n);
	
	int max=0;
	if(m>n){
		max=n;
	}
	else{
		max=m;
	}
	while(1){
		if(m%max==0&&n%max==0){
			printf("最大公约数为:%d\n",max);
			break;
		}
		max--;
	}
	return 0;
}
