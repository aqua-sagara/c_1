#include<stdio.h>
#include<stdlib.h>/*乱数発生のために必要*/
main()
{
  int score[40];
  int i,sum=0;
  double avg=0.0;
  int n_gtavg=0;
  /*乱数を使用するためのおまじない*/
  srand((unsigned)time(NULL));
  /*1クラス分の点数作成*/
  for(i=0;i<40;i++){
    score[i]=rand()%(100+1);
    printf("score[%d]=%d\n",i,score[i]);
    sum+=score[i];
    
	   }
      /*ここに処理を追加*/

      /*結果出力*/
  avg=(double)sum/40;
  for(i=0;i<40;i++){
  if(score[i]>=avg)
    n_gtavg++;}

      printf("平均点=%f\n",avg);
    printf("合格者数=%d\n",n_gtavg);
  }
