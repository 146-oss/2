#include <stdio.h>
int strlen(char* s){
	if(*s!='\0'){
		return 1+strlen(s+1);
	}
	else{
		return 0;
	}
}
int main(){
	char arr[]="bit";
	printf("%d",strlen(arr));
	return 0;
} 
