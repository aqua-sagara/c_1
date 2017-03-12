#include <stdio.h>

double arctan(int);

main(){
    int i, maximum;
    double t =0; 
    
    printf("級数の計算上限となる数を奇数で入力して下さい: ");
  scanf("%d", &maximum);
  
  t = arctan(maximum);
  
  printf("%dまで計算した場合の pi の値: %f\n", maximum, 4*t);
  }



double arctan(int N){
  int i;

  double result = 0, bunbo;  

  for(i = 1  ;  i <= (N/2+1) ;  i++){
    bunbo = 1.0 / (2.0*i-1.0);
    if(i%2 == 0) result -= bunbo;
    else result += bunbo; 
  }
  return result;
}
