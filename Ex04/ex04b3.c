#include <stdio.h>
main() {
  int x;
  printf("整数を入力してください\n");
  scanf("%d",&x);
  if(x<=9)
    printf("結果は0x%dです\n",x);
  if(x==10)
    printf("結果は0xaです\n");
 if(x==11)
    printf("結果は0xbです\n");
 if(x==12)
    printf("結果は0xcです\n");
 if(x==13)
    printf("結果は0xdです\n");
 if(x==14)
    printf("結果は0xeです\n");
 if(x==15)
    printf("結果は0xfです\n");
 if(x>15)
   printf("対応出来る範囲を越えています\n");
}
