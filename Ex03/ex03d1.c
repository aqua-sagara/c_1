#include <stdio.h>
main()
{
  int m,n,a;
  printf("整数m,nを入力してください\n");
  scanf("%d%d",&m,&n);
  a=m-((m/n)*n);
    printf("%dを%dでわった余りは%dです\n",m,n,a);
}

