#include<stdio.h>

int main(void)
{
    char name[10];
	float height;
	float gu; 
	float el;
	float su; 
	
	printf("이름은: ");
    scanf("%s",&name);
	printf("내키은: ");
	scanf("%.1f",&height);
	
	printf("국어점수: \n");
	scanf("%f",&gu);
	
    printf("영어점수: \n");
	scanf("%f",&el);
	
	printf("수학점수: \n");
	scanf("%f",&su);

    printf("총점:%f",gu+el+su);
    printf("평균:%f",gu+el+su/3);

    return 0;
		
}
