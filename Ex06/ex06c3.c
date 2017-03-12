#include <stdio.h>
main()
{
  int n,i,a,b,c=0;
  for(i=1;i<=10;i++){
    printf("%d個目の整数を入力してください:",i);
  scanf("%d",&n);
  if(n<=0)
    printf("入力された数が0以下なのでスキップします\n");
  if(n==1)
    printf("入力された数が1なのでスキップします\n");
  if(n==2){
    c++;
    printf("2は素数\n");}
  if(n==3){
     c++;
     printf("3は素数\n");}
  
  if(n>3) 
   for(a=2;a<n;a++){
     b=n%a;
     if(b==0)
    
     break;
     else {
       c++;
     printf("%dは素数\n",n);
     break;
     
     }   
   } 
  } 
  printf("素数は%d個ありました",c);
}
