#include <stdio.h>
main()
{
  double a,b,c,w,d;
  printf("直方体の３辺の長さ(cm)それぞれ入力してください\n");
  scanf("%lf%lf%lf",&a,&b,&c);
  printf("直方体の重さを入力してください:\n");
  scanf("%lf",&w);
  d=w/(a*b*c);
  printf("密度は%.1fです\n",d);
}
