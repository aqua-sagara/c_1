#include <stdio.h>
main()
{
  int i;
  double tuki[12],max ,min,ave,sa,sum=0;
  printf("1月〜12月の気温（摂氏）を入力して下さい\n");
  scanf("%lf",&tuki[0]);
  max=tuki[0];
  min=tuki[0];
  sum+=tuki[0];
  for(i=1;i<12;i++)
    {
      scanf("%lf",&tuki[i]);
      if(tuki[i]>max)
	max=tuki[i];
      if(tuki[i]<min)
	min=tuki[i];
      sum+=tuki[i];
    }
  printf("最高： %.1f  最低： %.1f\n",max,min);
  ave=(double)sum/12;
  sa=max-min;
  printf("平均： %.1f  年較差： %.1f\n",ave,sa);
 
 if(min>18)
    printf("気候区分：A(熱帯)\n");
 if(min>=-3&&min<18&&max>=10)
    printf("気候区分：C(温帯)\n");
 if(min<-3&&max>=10)
    printf("気候区分：D(亜寒帯)\n");
 if(max<10)
    printf("気候区分：E(寒帯)\n");
}



