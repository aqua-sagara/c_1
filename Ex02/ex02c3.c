#include <stdio.h>
main()

{
  int a,d,n,an,sn;
  printf("Enter a1 d n \n");
  scanf("%d%d%d",&a,&d,&n);
  an=(a+(n-1)*d);
    sn=(n/2*(2*a+(n-1)*d));
  printf("an=%d\n",an);
  printf("sn=%d\n",sn);
}
