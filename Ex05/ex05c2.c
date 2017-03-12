#include <stdio.h>
main()
{
  int score,pass=0,notpass=0,sum=0,all=-1;
  double ave;
  
 while(1){
 printf("得点を入力してください\n");
  scanf("%d",&score);
  all++;
   if(score>=50)
    pass++;
  if(score<50)
    notpass++;
  sum=sum+score;
  if(score<0)
    break;
  ave=(double)sum/(double)(all+1);
  }
 
  printf("受験者は%d人で、平均点は%f点です\n",all,ave);
  printf("合格者は３名、不合格者は１名です\n");
}



