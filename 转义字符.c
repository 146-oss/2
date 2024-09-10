#include <stdio.h>
#include <string.h>
int main()
{
	printf("ab\ncd\n");
	printf("\\c\n");
	printf("\"\n");
	printf("%c\n",'\57');
	printf("%c",'\x30');
	return 0;
 } 
