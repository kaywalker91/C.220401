#include<stdio.h>

int main(void)
{
	
	int age;
	
	printf("내나이: ");
	scanf("%d",&age);

    if(age>19)
      printf("성인입니다");
	
	else
	  printf("학생입니다");
	
    return 0;
		
}
