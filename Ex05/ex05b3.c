#include <stdio.h>
main(){
  double x,sum;
  int y;

  sum=0;
  while(1){
    printf("数字を入力してください\n");
  scanf("%lf",&x);
    sum=sum+x;
  
  printf("合計 %f\n",sum); 
 y=sum/10;
  if(y%10==5)break;
}
  printf("条件成立\n");
}
