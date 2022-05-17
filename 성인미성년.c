#include<stdio.h>

int main(void)
{
	
	int age;
	
	printf("나이: ");
	scanf("%d",&age);

    if(age>=18)
    {
      printf("성인입니다!\n");
	}
	else
	{
	  printf("미성년입니다!\n");
	}
	  
	
    return 0;
		
}
