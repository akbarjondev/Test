#include<stdio.h>

int main()
{
  int a,b;

  scanf("%d",&a);
  scanf("%d",&b);

  if(a>b)
  printf("%d",a);
  else if (a<b)
  printf("%d",b);
  else if (a==b)
  printf("%d",b);
  return 0;

}
