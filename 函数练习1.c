#include <stdio.h>
int pan(int a){
	int i=0;
	for (i=2;i<a;i++)
	{
		if(a%i==0){
			break;
		}
	}
	if(a==i)
{
return 1;	
}
else{
	return 0;
}
}

int main(){
	int a=0;
	scanf("%d",&a);
	if(pan(a)){
		printf("%d是素数",a);
		
	}
	else {
		printf("%d不是素数",a);
	}
	return 0;
}
