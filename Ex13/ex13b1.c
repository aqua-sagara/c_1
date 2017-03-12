/* 修正点をコメントでここに記述 */
#include <stdio.h>
#define PI 3.141592
double  cirarea_r4(double);

main()
{
  double x;
  double menseki;

  printf("円の半径を入力して下さい ");
  scanf("%lf",&x);
  menseki=cirarea_r4(x);
  printf("半径%gの円の面積は%gです\n",x, menseki);
}

double  cirarea_r4(double r)
{
 
  r=PI*r*r;
  r=(int)(r*1000+0.5)/(double)1000;
    return r;
    
}
