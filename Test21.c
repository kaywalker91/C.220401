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
	
	printf("�̸���: ");
    scanf("%s",&name);
	printf("��Ű��: ");
	scanf("%f",&height);
	
    printf("��������: ");
	scanf("%d",&gu);
	
	printf("��������: ");
	scanf("%d",&el);
	
	printf("��������: ");
	scanf("%d",&su);
	
	sum = gu+el+su;
	avg = sum/3;
	
	printf("�̸���:%s/",name);
	printf("Ű��:%.1f/",height);
    printf("����:%d/",sum);
    printf("���:%d",avg);

    return 0;
		
}
