#include <stdio.h>
main()
{
  int all=10000,kongetu,count=0;
  while(1){
    count++;
  

  printf("%dヶ月目\n",count);
  printf("利子適用後の借金の金額は%d円です\n",all);
  printf("今月の返済金額を入力してください\n");
  scanf("%d",&kongetu);
 all=all-kongetu;
  printf("借金の金額は%d円になりました\n",all);
  all=all*1.05;
  if(all==0)break;
  }
  printf("返済が終了しました\n");

}



