#include <stdio.h>
int main(){
	int i=1;
/*	while(i<=10){
		if(i==5)
		{
			break;
		}
		printf("%d ",i);
		i++;
	}*/
	while(i<=10){
		if(i==5)
		{
			continue;
		}
		printf("%d ",i);
		i++;
		
	}
	return 0;
}
