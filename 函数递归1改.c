#include <stdio.h>
int main(){
	unsigned int num=0;
	scanf("%u",&num);
	void print(unsigned int n);
	print(num);
	
	return 0;
}
void print(unsigned int n){
	if(n>9){
		print(n/10);
	}
	printf("%d ",n%10);
}
