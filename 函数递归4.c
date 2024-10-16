#include <stdio.h>
int fei(int n){
	if(n<=2){
		return 1;
	}
	else{
		return fei(n-1)+fei(n-2);
	}
}
int main(){
	int n=0;
	scanf("%d",&n);
	int ret=fei(n);
	printf("%d\n",ret);
	return 0;
}
