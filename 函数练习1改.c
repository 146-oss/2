#include <stdio.h>
int pan(int n){
	int j=0;
	for(j=2;j<n;j++){
		if(n%j==0){
			return 0;
		}
		
	}
	return 1;
}
int main(){
	int i=0;
	int count=0;
	
	for(i=100;i<=200;i++){
		if(pan(i)){
			printf("%d ",i);
			count++;
		}
	}
	printf("\n count=%d \n",count);//ע�⻻����б�ܣ�ע����б�� 
	return 0;
}
