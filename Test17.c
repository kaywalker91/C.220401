#include<stdio.h>

int main(void)
{
    char name[10];
	float height;
	float gu; 
	float el;
	float su; 
	
	printf("�̸���: ");
    scanf("%s",&name);
	printf("��Ű��: ");
	scanf("%.1f",&height);
	
	printf("��������: \n");
	scanf("%f",&gu);
	
    printf("��������: \n");
	scanf("%f",&el);
	
	printf("��������: \n");
	scanf("%f",&su);

    printf("����:%f",gu+el+su);
    printf("���:%f",gu+el+su/3);

    return 0;
		
}
