#include<stdio.h>

int main(void)
{
	int number;
	char mun = 'a';
	char name[10] = "홍길동1";
	char *name2 = "홍길동2";
	float height = 175.5;
	
	number = 10;
	
	printf("내이름1은: %s\n",name);
	printf("내이름2은: %s\n",name2);
	printf("내숫자은: %d\n",number);
	printf("내키은: %f\n",height);

    return 0;
		
}
