#include <stdio.h>
int main(){
	int x=3;
	int y=3;
	switch(x%2){
		case 1:switch(y)
		{
			case 0:printf("first");
			case 1:printf("second");
			default:printf("hello");
		}
		case 2:
			printf("third");
	}
	return 0;
}
