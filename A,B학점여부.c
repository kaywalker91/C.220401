#include<stdio.h>

int main(void)
{
	
	int kor,eng,math,sum,avg;
	
	printf("국어: ");
	scanf("%d",&kor);
	
	printf("영어: ");
	scanf("%d",&eng);
	
	printf("수학: ");
	scanf("%d",&math);
	
	sum = kor+eng+math;
	avg = sum/3;
	
	printf("총점: %d / 평균: %d\n",sum,avg);

    if(avg>=90)
    {
      printf("A학점입니다.\n");
	}
	else if(avg>=80)
	 {
      printf("B학점입니다.\n");
	}
	else
	{
	  printf("평범한학생입니다!\n");
	}
	  
	return 0;
    
}
