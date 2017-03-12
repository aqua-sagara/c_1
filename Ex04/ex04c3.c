#include <stdio.h>
main() {
  int score;
  printf("点数を入力してください\n");
  scanf("%d",&score);
  if(score>=90)
  printf("点数：%d点 評価：SA\n",score);
  if(score>=80&&score<90)
  { printf("点数：%d点 評価：A\n",score);}
 if(score>=65&&score<80)
  { printf("点数：%d点 評価：B\n",score);}
 if(score>=50&&score<65)
  {printf("点数：%d点 評価：C\n",score);}
 if(score>=35&&score<50)
  {printf("点数：%d点 評価：D\n",score);}
 if(score>=0&&score<35)
  {printf("点数：%d点 評価：F\n",score);}

  if(score<0||score>100)
  {printf("点数：%d点 評価:入力された値が異常\n",score);}
}
