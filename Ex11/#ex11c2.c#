#include <stdio.h>
main()
{
int InMat[3][4],OutMat[6][2],i,j,m,n;
  printf("３行４列の行列を整数値で入力して下さい。 \n");
  for(i=0;i<3;i++)
    {
      for(j=0;j<4;j++)
	{
	  scanf("%d",&InMat[i][j]);
	}
    }
  printf("６行２列に変換した行列を表示します。\n");
  for(i=0;i<3;i++)
    {
      for(j=0;j<4;j++)
	{
	  if(j%2==0){
	    OutMat[m][0]=InMat[i][j];
	    printf("%2d ",OutMat[m][0]);
	  }
	  if(j%2==1)
	    {
	      OutMat[m][1]=InMat[i][j];
	      
	      printf("%d ",OutMat[m][1]);
		     printf("\n");
		     m++;
	    }
	}
    }
}
