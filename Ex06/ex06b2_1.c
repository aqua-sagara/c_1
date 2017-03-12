



#include <stdio.h>
main()
{
  int n,r,x,y=1,z=1,a,b,d=1,e;
  printf("nとrを入力してください:");
  scanf("%d%d",&n,&r);
 
  for(x=n;x>0;x--)
    {
      y*=x;
    }/*nの階乗*/
  for(a=r;a>0;a--)
    {
      z*=a;
    }/*rの階乗*/
  for(b=n-r;b>0;b--)
    {
      d*=b;
    }/*(n-r)の階乗*/
  e=y/d/z;
  printf("%dC%d=%d\n",n,r,e);
}
