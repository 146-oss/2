#include <stdio.h>
void jia(int* pn){
	*pn=*pn+1;
	
	
}
int main(){
	int num=0;
	printf("%d\n",num);
	jia(&num);
	printf("%d\n",num);
	jia(&num);
	printf("%d\n",num);
	jia(&num);
	printf("%d\n",num);
	return 0;
}
