#include <stdio.h>

main()
{
int a,b,c,res;
 a=2;
 b=3;
 c=4;
  res=a*b;
  printf("%d*%d=%d\n",a,b,res);
   res=(2*a+b)%c;
   printf ("(2*%d+%d)%%%d=%d\n",a,b,c,res);
 /*printfで表示させたい場合は％％を使用する*/

}
