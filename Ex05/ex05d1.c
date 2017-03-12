#include <stdio.h>
main()
{
  int n,m,x,y;
  printf("m,nを入力してください\n");
  scanf("%d%d",&m,&n);
 
  while(1){
     y=m%n;
    printf("%d％%d=%d\n",m,n,y);
   
     x=m/n;
 
 if(y==0)break;
 m=n;
 n=y;
    
  }
  printf("最大公約数は%dです\n",n);
}
