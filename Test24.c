#include<stdio.h>

int main(void)
{
    char place[10];
	float weight;
	int age; 
	char name[10];
	
    printf("���ּ�: ");
    scanf("%s",&place);
	printf("������: ");
	scanf("%f",&weight);
	printf("����: ");
    scanf("%d",&age);
    printf("�̸�: ");
    scanf("%s",&name);
	
	printf("%s���� ��� %s��\n ������ %.1fkg�̰� ���̴� %d���Դϴ�",place,name,weight,age);

    return 0;
		
}
