#include<stdio.h>
main()
{
  int Fibonacci[21],i;
  double b=0;
  
  Fibonacci[0]=0;
  Fibonacci[1]=1;

  printf("Fibonacci[0]=0\n");
 printf("Fibonacci[1]=1\n");

  for(i=2;i<=20;i++){
   Fibonacci[i]=Fibonacci[i-1]+Fibonacci[i-2];
   printf("Fibonacci[%d]=%d\n",i,Fibonacci[i]);
  }



  for(i=2;i<=20;i++){
   
 
    b=(double)Fibonacci[i]/(double)Fibonacci[i-1];

    printf("Fibonacci[%d]/Fibonacci[%d]=%lf\n",i,i-1,b);
  }
}

 
