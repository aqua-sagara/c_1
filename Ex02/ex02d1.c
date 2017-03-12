#include <stdio.h>
main()
{
  int a,b,c,d,e,x;
  printf("enter x\n");
  scanf("%d",&x);
  printf("x:y\n");
  a=((x-2)*(x-2)-4*(x-2)+3);
  b=((x-1)*(x-1)-4*(x-1)+3);
  c=(x^2-4*x+3);
  d=((x+1)*(x+1)-4*(x+1)+3);
  e=((x+2)*(x+2)-4*(x+2)+3);
  printf("0:%d\n",a);
  printf("1:%d\n",b);
  printf("2:%d\n",c);
  printf("3:%d\n",d);
  printf("4:%d\n",e);
}
