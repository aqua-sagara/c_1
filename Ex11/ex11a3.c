#include <stdio.h>

main()
{
  int i, j, mat[][3]={{1,  4, 7},{2,  5 , 8},{ 3 , 6 , 9}};
  
  for (i=0; i<3; i++){
    for (j=0; j<3; j++){
      printf(" %d", mat[j][i]);
    }
    printf("\n");  
  }

  printf("上記行列の主対角線にある要素値は下記の通りです：\n");
  for (i=0; i<3; i++){
    printf(" %d", mat[i][i]);
  }
  printf("\n");  
}
