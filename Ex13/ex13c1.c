#include <stdio.h>
#define KOU 10

double kaijo(double);
main()
{
  double x,y,i;
  double sum;
  if(KOU==1){
    printf("e=1\n");
  }else if(KOU>1){
    sum=1;
    for(i=1;i<KOU;i++){
      y = kaijo(i);
      x=1/(double)y;
      sum=(double)(sum+x);
    }
    printf("e=%f\n",sum);
  }

}
double kaijo(double n)
{
  int i;
  double sum=1;
  for(i=1; i <=n ; i++){
    sum = sum*(double)i;
  }
  return sum;
}
  
