#include <stdio.h>
int main(){
	int age=0;
	scanf("%d",&age);
	if(age<18)
     printf("少年\n");
     else if(age>=18&&age<26)
     printf("青年\n");
     else if(age>=26&&age<40)
     printf("中年\n");
     else if(age>=40&&age<60)
     printf("壮年\n");
     else
     printf("老不死\n"
	 );
		
	
	return 0;
} 
