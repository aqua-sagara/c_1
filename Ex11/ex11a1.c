#include <stdio.h>

main()
{
  int i, j, val[3][4];

  for (i=0; i<4; i++){
    for (j=0; j<3; j++){
      val[j][i]=j+i*10;
    }
  }
  for (i=0; i<3; i++){
    for (j=0; j<4; j++){
      printf(" %2d ", val[i][j]);
    }
    printf("\n");
  }
}

