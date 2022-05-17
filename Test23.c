#include<stdio.h>

int main(void)
{
    char name[10];
	float height;
	int gu; 
	int el;
	int su;
	int sum;
	int avg;
	
	printf("이름은: ");
    scanf("%s",&name);
	printf("내키은: ");
	scanf("%f",&height);
	
    printf("국어점수: ");
	scanf("%d",&gu);
	
	printf("영어점수: ");
	scanf("%d",&el);
	
	printf("수학점수: ");
	scanf("%d",&su);
	
	sum = gu+el+su;
	avg = sum/3;
	
	printf("이름은:%s / 키는:%.1f / 총점:%d / 평균:%d ",name,height,sum,avg);

    return 0;
		
}
