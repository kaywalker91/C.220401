#include<stdio.h>
/*--------------------------------
���α׷� �� : �Է� ���α׷�
�ۼ��� : ������
�����ۼ��� : 2013.12.15
������������ :
����: �а������Է�, ����ü ���
---------------------------------*/
struct hakgwa
{
 char name[50];
 int  std_cnt;
 int  room_cnt;
};


int main(void)
{ 
 //��������
 struct hakgwa profile[50];
 int choice;     //���ÿ�
 int input_cnt; //�Է¼� üũ
 int i;   //for ��

 printf("===================\n");
 printf("�а� �Է����α׷�!!\n");
 printf("===================\n");

    while(1)
 {
  printf("\n\n");
  printf("1.�а� ���� �Է� \n");
  printf("2.��ü �а� ���� \n");
  printf("3.����\n");
  printf("--------------------\n");
  printf("��ɼ��� : ");
  scanf("%d", &choice);

  switch(choice)
  {
  case 1 : printf("�Է� �а� ����? ");
     scanf("%d", &input_cnt);
     for(i=0; i<input_cnt; i++)
     {
      printf("�а� �̸�    : ");
      scanf("%s", &profile[i].name);
      printf("�а� �л���  : ");
      scanf("%d", &profile[i].std_cnt);
      printf("�а� ���ǽǼ�: ");
      scanf("%d", &profile[i].room_cnt);
     }
     break;
  case 2 : 
     for(i=0; i<input_cnt; i++)
     {
     printf("%s\t%�л�%d��\t���ǽ�%d��\n",profile[i].name,profile[i].std_cnt,profile[i].room_cnt);
     }
     break;
  case 3 :  printf("���α׷��� �����մϴ�."); break;
  }

  if(choice ==3)
   break;
 }
 return 0;
}
