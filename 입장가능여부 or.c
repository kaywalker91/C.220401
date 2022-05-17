#include<stdio.h>

int main(void)
{
	
	int x,y;
	
	printf("레벨: ");
	scanf("%d",&x);
	
	printf("아이템레벨: ");
	scanf("%d",&y);


    if((x>=30) || (y>=33)) 
      printf("입장가능입니다");
	
	else
	  printf("입장불가능입니다");
	
    return 0;
		
}
