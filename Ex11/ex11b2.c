#include <stdio.h>
main()
{

  int i,j,a[10][10],s,t;
  printf("２次元配列aの行数、列数を入力してください：\n");
  scanf("%d%d",&s,&t);
  printf("配列aの要素値を左から右、上から下の順で入力してください：\n");
  for(i=0;i<s;i++){
    for(j=0;j<t;j++){
      scanf("%d",&a[i][j]);
    }
  }
  printf("配列aの要素値を表示します\n");
 for(i=0;i<s;i++){
    for(j=0;j<t;j++){
      printf("a[%d][%d]= %d ",i,j,a[i][j]);
    }
    printf("\n");
 }
}
