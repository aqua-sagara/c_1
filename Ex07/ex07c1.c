#include<stdio.h>
main()
{
  int i, m[10],max,min;
  printf("10個の整数を空白で区切って入力して下さい。\n");
  for(i=0;i<=9;i++){
    scanf("%d",&m[i]);
  }
  max=m[0];
  for(i=0;i<=9;i++){
    if(m[i]>=max)
      max=m[i];
  }
    

    printf("最大値は%dです。\n",max);
    min=m[0];
for(i=0;i<=9;i++){
    if(m[i]<min)
      min=m[i];
  }
    

    printf("最小値は%dです。\n",min);
    for(i=0;i<=9;i++){
    printf("%d ",m[i]);
    }
}
