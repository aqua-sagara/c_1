#include <stdio.h>
main()
{
  int i,n;
  int num=47; /*この数を当てる*/
  int iszero=0; /*当たれば１になる*/

  for(i=1;i<=10;i++){
    printf("1から9までの数を入力してください%d回目:",i);
    scanf("%d",&n);

    /*指定された範囲外の数が入力されたら、*/
    /*入力をやり直す(回数のカウントは増える)*/
    if(n>=10||n<=0)
      continue;

    num-=n;
    if(num==0){
      iszero=1;
      break;
    }
  }
  if(iszero==1)
    printf("%d回目で当たりました\n",i);
  else
    printf("残念ながら当たりませんでした\n");
}
