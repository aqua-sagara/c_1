#include <stdio.h>
#define SUBJ 3
#define NUM 5
main()
{
  int score[NUM][SUBJ]={54,56,76,87,66,81,93,64,79,46,93,62,87,46,59};
  int i,j,sum1[NUM],sum2[SUBJ]
  int a[SUBJ],b[NUM];
  printf("科目数:%d,学生数%d\n",SUBJ,NUM);
  for(i=0;i<NUM;i++)
    {
      sum1[i]=0;                       /*初期化*/
      for(j=0;j<SUBJ;j++)
	{
	  printf("%d",score[i][j]);
	  sum1[i]+=score[i][j];
	}
      b[i]=(double)sum1[i]/(double)SUBJ;
      printf("%f",b[i]);
      printf("\n");                    /*表示*/
    }
  for(i=0;i<NUM;i++)
    {
      sum2[0]+=score[i][0];
      sum2[1]+=score[i][1];
      sum2[2]+=score[i][2];
    }
  a[0]=(double)sum2[0]/NUM;       /*平均処理*/
  a[1]=(double)sum2[1]/NUM;
  a[2]=(double)sum2[2]/NUM;

for(j=0;j<SUBJ;j++)
	{
	  printf("%f",a[j]);               /*表示*/
	}
}

  


