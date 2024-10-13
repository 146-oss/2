#include <stdio.h>
test3(){
	printf("lalal\n");
	return 0;
}
int test2(){
	test3();
	return 0;
}
int main(){
	test2();
	return 0;
}
