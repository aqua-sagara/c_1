#include <stdio.h>
#define SUBJ 9
#define NUM 20
main()
{ 
  int score[NUM][SUBJ],c,d;
  int i,j,sum1[NUM],sum2[SUBJ];
  scanf("%d%d",&c,&d);
    printf("科目数:%d,学生数%d\n",c,d);

 for(i=0;i<d;i++)
    {
      for(j=0;j<c;j++)
	{
	  scanf("%d",&score[i][j]);/*入力*/
	}
    }
 for(i=0;i<d;i++)
    {
      sum1[i]=0;/*初期化*/
      for(j=0;j<c;j++)
	{
	  printf("%d    ",score[i][j]);
	  sum1[i]+=score[i][j];
	}

      printf(":%.1f\n",(double)sum1[i]/(double)c); /*平均処理*/

    }
 
 for(j=0;j<c;j++)
   {
     sum2[j]=0;/*初期化*/
     for(i=0;i<d;i++)
       {
	 sum2[j]+=score[i][j];
       }
     printf("%.1f ",(double)sum2[j]/(double)d);/* 平均処理*/
   }printf("\n");
}


 
	
     
    
