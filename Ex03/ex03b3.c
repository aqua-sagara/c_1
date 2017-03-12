#include <stdio.h>
main()
{
  double tate,yoko,nagasa;
  printf("長方形の縦の辺の長さと横の辺の長さを、cmで入力してください:\n");
  scanf("%lf%lf",&tate,&yoko);
  nagasa=tate*2+yoko*2;
  printf("長方形の周の長さは,%.1fです\n",nagasa);
}
