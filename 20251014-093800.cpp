#include<stdio.h>
int main()
{
int cat1,cat2,mainexam,marks;
 printf("Enter cat1:");
 scanf("%d", &cat1);
  printf("Enter cat2:");
  scanf("%d", &cat2);
  printf("Enter mainexam:");
  scanf("%d", &mainexam);
  marks = (cat1+cat2)/2 + mainexam;
  if(marks >= 40){
  printf("passed");
  }
  else {
  printf("failed");
  }
    return 0;
}