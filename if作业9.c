#include <stdio.h>
int main(){
	int i=0;
	for(i=100;i<=200;i++){
		int j=0;
		for(j=2;j<i;j++){
			if(i%j==0){
				break;
			}
		}
		if(i==j){
			printf("%d ",i);
		}
	}
	return 0;
}
