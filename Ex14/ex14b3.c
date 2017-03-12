#include <stdio.h>
#include <math.h>
#define EPS 1.0e-6

double f(double, double,double);
double df(double,double);

main()
{
  double a,x,fx,dfx,b;
  printf("根の次数を入力して下さい\n");
  scanf("%lf",&b);
  printf("根を求めたい数を入力して下さい:");
  scanf("%lf",&a);
  x=a;
  printf("x(k-1)\t\tfx\t\tdfx\t\tx(k)\t\tf(x,%f)\n",a);
  while((fx=f(x,a,b))>EPS)
    {
      dfx =df(x,b);
      printf("%f\t%f\t%f",x,fx,dfx);
      x=x-fx/dfx;
      printf("\t%f\t%f\n",x,f(x,a,b));
	}
  printf("3-th root(%f) : %f\n",a,x);
}

double f(double x, double a,double b)
  {
    double fx;
    fx=pow(x,b)-a;
    return fx;
  }

double df(double x,double b)
  {
    double dfx;
    dfx =b*pow(x,(int)b-1);
    return dfx;
  }
