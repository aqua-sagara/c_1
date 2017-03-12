#include<stdio.h>
double avg(int,double,double);
main()
{
  int n=1;
  double x,ave=0,c=0;
  printf("データを入力してください!\n");
  while(1){
   
    printf("入力値%d = ",n);
    scanf("%lf",&x);
    
    if(x==0)
      break;
    c=avg(n,x,c);
    printf("平均値%d = %.1f\n",n,c);
  n+=1;
 }
}
  double avg(int n,double x,double ave)
  {
   
    
    ave=(ave*(n-1)+x)/n;
    return ave;
  }
