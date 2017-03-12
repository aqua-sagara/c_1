#include <stdio.h>
main()
{
  int i,j,a[3][4],b=0,c=0,d,e,f,g,h;
  double ave1[3],ave2[4],o,p,k,l,m;
  printf("Enter 3 x 4 data\n");
  for(i=0;i<3;i++)
    {
      for(j=0;j<4;j++)
	{
	  scanf("%d",&a[i][j]);
	}
    }
  printf("Data and average\n");
 for(i=0;i<3;i++)
    {
      for(j=0;j<4;j++)
	{
	 printf("    %d ",a[i][j]);
	 b+=a[i][j];

	}
   
      ave1[j]=(double)b/(double)4;
      printf("%.2f  ",ave1[j]);
      printf("\n");
    }
 d=a[0][0]+a[1][0]+a[2][0];
e=a[0][1]+a[1][1]+a[2][1];
f=a[0][2]+a[1][2]+a[2][2];
g=a[0][3]+a[1][3]+a[2][3];
h=ave1[0]+ave1[1]+ave1[2];
 o=(double)d/(double)3;
p=(double)e/(double)3;
k=(double)f/(double)3;
l=(double)g/(double)3;
m=(double)h/(double)3;
 printf("%.2f %.2f %.2f %.2f %.2f \n",o,p,k,l,m);
}
