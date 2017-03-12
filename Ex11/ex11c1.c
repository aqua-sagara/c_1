#include <stdio.h>
main()
{
  int a,b,c[10][10],i,j;
  printf("行数と列数を空白で区切って入力してください＝\n");
  scanf("%d%d",&a,&b);
  if(a>10||b>10)
    printf("行数と列数のいずれかが配列の大きさを超えています\n");
  else {
  printf("%d行%d列の行列を空白で区切って整数値で入力してください\n",a,b);
  for(i=0;i<a;i++){
    for(j=0;j<b;j++){
      scanf("%d",&c[i][j]);
    }
  }
  printf("入力行列を表示します。\n");
  for(i=0;i<a;i++){
    for(j=0;j<b;j++){
      printf("%d  ",c[i][j]);
    }
    printf("\n");
    }
    printf("転置行列を表示します。\n");
    for(i=0;i<b;i++){
    for(j=0;j<a;j++){
      printf("%d  ",c[j][i]);
    }   printf("\n");
    
    }  
  }
}


