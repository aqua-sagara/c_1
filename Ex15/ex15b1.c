#include <stdio.h>
main()
{
  int data[10][10],n,i,j;
  
  printf("nを入力して下さい:");
  scanf("%d",&n);
  if(n>=10)
    return;
  
  
  data[0][0]=1;
  printf("%d\n",data[0][0]);
  
  for(i=1;i<=n;i++){
    for(j=0;j<=n;j++){
      if(j==0)
	data[i][j]=1;
      else if(j==i){
	data[i][j]=1;
	break;
      }
      else
	data[i][j]=data[i-1][j-1]+data[i-1][j];
    }
  }
  for(i=1;i<=n;i++){
    for(j=0;j<=n;j++){
      if(data[i][j]==0)
	break;
      printf("%d   ",data[i][j]);
    }
    printf("\n");
  }
}

