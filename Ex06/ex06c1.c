#include <stdio.h>
main()
{
  int a,b,c;
  printf("整数を入力してください:");
  scanf("%d",&a);
  for(b=0;b<a;b++){
    c=b%3;
    if(c==1)
      printf("%d\n",b);
    
  }
}
