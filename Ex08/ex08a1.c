#include <stdio.h>
main()
{
  int i;
  double x[5],y[5],naiseki=0,t;
  printf("ベクトルxの座標を空白で区切って入力してください。\n");
  for(i=0;i<=4;i++){
  scanf("%lf",&x[i]);
  }
 printf("ベクトルyの座標を空白で区切って入力してください。\n");
  for(i=0;i<=4;i++){
  scanf("%lf",&y[i]);
  }
  for(i=0;i<=4;i++){
    t=x[i]*y[i];
    naiseki+=t;
  }
  printf("xとyの内積の値は%fです\n",naiseki);
}

