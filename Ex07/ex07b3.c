#include<stdio.h>
main()
{
  int score[4],i;
  printf("5人分の評点を入力して下さい。\n");
  for(i=0;i<=4;i++){

  scanf("%d",&score[i]);
  }
  for(i=0;i<=4;i++){
  printf("%d:%d",i+1,score[i]);
if(score[i]>=80)
printf(" A\n");
if(score[i]>=65&&score[i]<80)
printf(" B\n");
if(score[i]>=50&&score[i]<65)
printf(" C\n");
if(score[i]>=35&&score[i]<50)
printf(" D\n");
if(score[i]<35)
printf(" F\n");
  }
	 
}
