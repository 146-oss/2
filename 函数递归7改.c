#include <stdio.h>
int jie(int n){
	if(n<=1){
		return 1;
	}
	else{
		return n*jie(n-1);
	}
}
int main(){
	int n=0;
	scanf("%d\n",&n);
	int ret=jie(n);
	printf("%d\n",ret);
	return 0;
}
