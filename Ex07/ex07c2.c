#include<stdio.h>
main()
{
  int i,x[3],y[3],naiseki;
 
    printf("ベクトルx：3個の整数を空白で区切って入力してください：");
 for(i=0;i<=2;i++){
   scanf("%d",&x[i]);
}
 printf("ベクトルy：3個の整数を空白で区切って入力してください：");
for(i=0;i<=2;i++){
  scanf("%d",&y[i]);
}
  naiseki=x[0]*y[0]+x[1]*y[1]+x[2]*y[2];
  printf("xとyの内積は%dです\n",naiseki);
  if(naiseki==0)
    printf("2つのベクトルは直交します\n");
}
