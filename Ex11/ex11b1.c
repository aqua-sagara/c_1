#include <stdio.h>
main()
{
  int i,j,matrix1[3][3],matrix2[3][3],n;
  printf("3行3列の行列を整数値で入力してください\n");
  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
      scanf("%d",&matrix1[i][j]);
    }
  }
  printf("行列を何倍（スカラー倍）しますか？\n");
scanf("%d",&n);
 printf("配列要素を表示します\n");

 for(i=0;i<3;i++){
    for(j=0;j<3;j++){
      matrix2[i][j]=matrix1[i][j]*n;
      printf("%2d ",matrix2[i][j]);
      
    }printf("\n");

 }
}
