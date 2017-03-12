#include <stdio.h>
main() {
  double x,y;
  printf("座標を入力してください\n");
  scanf("%lf%lf",&x,&y);

  if(x==1.0&&y==0.0)
    printf("東向きです\n");
if(x==0.0&&y==0.0)
    printf("あなたは原点にいます\n");
if(x==0.0&&y>0)
    printf("北向きです\n");
if(x==-1.0&&y==0.0)
    printf("西向きです\n");
if(y==x&&x>0&&y>0)
    printf("北東向きです\n");
if(y==-x&&x<0&&y>0)
    printf("北西向きです\n");
 else if (y>x&&x>0&&y>0)
   printf("北北東向きです\n");
else if (x>y&&x>0&&y>0)
   printf("東北東向きです\n");
 else if (y>x&&x<0&&y>0)
printf("西北西向きです\n");
 else if (x>y&&x<0&&y>0)
printf("北北西向きです\n");
}
