#include <stdio.h>
main()
{
  int a,b,c,d,e,f,g,h,i,j,k;
  double l;

  printf("国語の点数と重みを入力してください :\n");
  scanf("%d%d",&a,&f);
printf("数学の点数と重みを入力してください :\n");
  scanf("%d%d",&b,&g);
printf("英語の点数と重みを入力してください :\n");
  scanf("%d%d",&c,&h);
printf("理科点数と重みを入力してください :\n");
  scanf("%d%d",&d,&i);
printf("社会の点数と重みを入力してください :\n");
  scanf("%d%d",&e,&j);
  k=a*f+b*g+c*h+d*i+e*j;
  l=(double)k/(double)(f+g+h+i+j);

  printf("５教科の重み付き合計点は%dで、重み付き平均点は%5.6f点です\n",k,l);
}


