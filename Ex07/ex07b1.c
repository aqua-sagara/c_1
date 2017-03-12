#include <stdio.h>
main()
{
  int i,a;
  int data[10];/*10個の要素を持つ配列*/
  data[0]=1;/*2の0乗*/
    for(i=1;i<10;i++){
      data[i]=2*data[i-1];/*2のi乗*/
    }
  /*これで2の9乗までの出来上がり*/

  /*配列の内容を出力*/
  for(i=0;i<10;i++){
    printf("%d ",data[i]);
  }
  printf("\n");
  scanf("%d",&a);
  for(i=0;i<10;i++){
    if(data[i]>=a)
    printf("%d ",data[i]);
  }

}

