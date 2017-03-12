#include <stdio.h>
double real (double,double,double,double);
double imaginary (double,double,double,double);

  main()
{
  double x1,x2,y1,y2,a,b;
  printf("2つの複素数の実部と虚部の値をそれぞれ空白で区切って入力してください\n");
  printf("複素数１＝ ");
  scanf("%lf %lf",&x1,&y1);
  printf("複素数２＝ ");
  scanf("%lf %lf",&x2,&y2);
  a=real(x1,x2,y1,y2);
  b=imaginary(y1,y2,x1,x2);
  if(a==0&&b!=0)
  printf("2つの複素数の積= %.2f i\n",b);
  
  else if (a!=0&&b!=0)
 printf("2つの複素数の積=%.2f %.2f i\n",a,b);
  else if (a!=0&&b==0)
  printf("2つの複素数の積=%.2f \n",a);
  else
 printf("2つの複素数の積= \n");


}

double real (double x1,double x2,double y1,double y2)
{
  double y;
  y=x1*x2+(y1*y2*-1);
  return y;
}

double imaginary (double y1,double y2,double x1,double x2)
{
  double y;
  y=(x1*y2)+(y1*x2);
  return y;
}


