#include<stdio.h>
main()
{
  int i,date[10]={1,12,23,34,45,56,67,78,89,90};
  printf("添字を入力してください:\n");
  scanf("%d",&i);
  if(i<0||i>9)
    printf("範囲外です\n");
  printf("date[%d]=%d\n",i,date[i]);

}
