#include <stdio.h>
#include <math.h>
double hypotenuse(double,double);
main()
{
  double x,y,l;

  printf("直角三角形の斜辺以外の２辺の長さをそれぞれ空白で区切って入力して下さい\n");
  scanf("%lf%lf",&x,&y);
  l=hypotenuse(x,y);
  printf("斜辺の長さ=%f\n",l);


}

double hypotenuse(double x,double y)
{
  double z;
z=sqrt(x*x+y*y);
return z;
}
