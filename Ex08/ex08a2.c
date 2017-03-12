#include<stdio.h>
main()
{
  int i,begin[6],end[6];
  double mid[6];
    double midave;
  for(i=0;i<=5;i++)
    {
    printf("%d番目の線分の始点と終点を空白で区切って入力して下さい。\n",i+1);
  scanf("%d%d",&begin[i],&end[i]);
    }
  for(i=0;i<=5;i++)
    {
      mid[i]=(double)(begin[i]+end[i])/2;
      printf("%d番目の線分(%d,%d)の中点は%fです\n",i,begin[i],end[i],mid[i]);
    }
  midave=(double)(mid[0]+mid[1]+mid[2]+mid[3]+mid[4]+mid[5])/6;
printf("中点の平均値は%fです\n",midave);
}
