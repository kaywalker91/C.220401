#include<stdio.h>

int main(void)
{
    char place[10];
	float weight;
	int age; 
	char name[10];
	
    printf("집주소: ");
    scanf("%s",&place);
	printf("몸무게: ");
	scanf("%f",&weight);
	printf("나이: ");
    scanf("%d",&age);
    printf("이름: ");
    scanf("%s",&name);
	
	printf("%s에서 사는 %s은\n 몸무게 %.1fkg이고 나이는 %d세입니다",place,name,weight,age);

    return 0;
		
}
