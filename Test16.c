#include<stdio.h>

int main(void)
{
    char name[10];
	float height;
	int gu; 
	int el;
	int su; 
	
	printf("�̸���: ");
    scanf("%s",&name);
	printf("��Ű��: ");
	scanf("%.1f",&height);
	
	printf("��������: ");
	scanf("%d",&gu);
	
    printf("��������: ");
	scanf("%d",&el);
	
	printf("��������: ");
	scanf("%d",&su);

    printf("����:%d",gu+el+su);
    printf("���:%d",gu+el+su/3);

    return 0;
		
}
