#include<stdio.h>

int main(void)
{
	
	int kor,eng,math,sum,avg;
	
	printf("����: ");
	scanf("%d",&kor);
	
	printf("����: ");
	scanf("%d",&eng);
	
	printf("����: ");
	scanf("%d",&math);
	
	sum = kor+eng+math;
	avg = sum/3;
	
	printf("����: %d / ���: %d\n",sum,avg);

    if(avg>=90)
    {
      printf("A�����Դϴ�.\n");
	}
	else if(avg>=80)
	 {
      printf("B�����Դϴ�.\n");
	}
	else
	{
	  printf("������л��Դϴ�!\n");
	}
	  
	return 0;
    
}
