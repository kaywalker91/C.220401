#include<stdio.h>
/*--------------------------------
프로그램 명 : 입력 프로그램
작성자 : 최팀장
최초작성일 : 2013.12.15
마지막수정일 :
설명: 학과정보입력, 구조체 사용
---------------------------------*/
struct hakgwa
{
 char name[50];
 int  std_cnt;
 int  room_cnt;
};


int main(void)
{ 
 //변수선언
 struct hakgwa profile[50];
 int choice;     //선택용
 int input_cnt; //입력수 체크
 int i;   //for 용

 printf("===================\n");
 printf("학과 입력프로그램!!\n");
 printf("===================\n");

    while(1)
 {
  printf("\n\n");
  printf("1.학과 정보 입력 \n");
  printf("2.전체 학과 보기 \n");
  printf("3.종료\n");
  printf("--------------------\n");
  printf("기능선택 : ");
  scanf("%d", &choice);

  switch(choice)
  {
  case 1 : printf("입력 학과 수는? ");
     scanf("%d", &input_cnt);
     for(i=0; i<input_cnt; i++)
     {
      printf("학과 이름    : ");
      scanf("%s", &profile[i].name);
      printf("학과 학생수  : ");
      scanf("%d", &profile[i].std_cnt);
      printf("학과 강의실수: ");
      scanf("%d", &profile[i].room_cnt);
     }
     break;
  case 2 : 
     for(i=0; i<input_cnt; i++)
     {
     printf("%s\t%학생%d명\t강의실%d개\n",profile[i].name,profile[i].std_cnt,profile[i].room_cnt);
     }
     break;
  case 3 :  printf("프로그램을 종료합니다."); break;
  }

  if(choice ==3)
   break;
 }
 return 0;
}
