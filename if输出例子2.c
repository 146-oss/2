#include <stdio.h>
int main(){
	int age=0;
	scanf("%d",&age);
	if(age<18)
     printf("����\n");
     else if(age>=18&&age<26)
     printf("����\n");
     else if(age>=26&&age<40)
     printf("����\n");
     else if(age>=40&&age<60)
     printf("׳��\n");
     else
     printf("�ϲ���\n"
	 );
		
	
	return 0;
} 
