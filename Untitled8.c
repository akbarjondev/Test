#include<stdio.h>

int main()

{
 int a;
 scanf("%d",&a);
 if(a%400==0)
 printf("Leap year");
 else if(a%100==0)
 printf("Normal year");
 else if(a%4==0)
 printf("Leap year");
 else printf("Normal year");


 return 0;
 }
