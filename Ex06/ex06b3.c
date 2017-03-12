#include <stdio.h>
main()
{
  int week,en=50000,a,sum=0;

  printf("整数を入力してください:");
  scanf("%d",&week);
  for(a=0;a<week;a++)
    {
      en=en*1.16;
      sum+=en;
     
    } printf("%d週間後の借金は%d円です\n",week,en);
}
