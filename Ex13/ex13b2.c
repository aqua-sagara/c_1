#include <stdio.h>
double ondo(int);
main()
{

  int i;
  double a4,a2;
 printf("摂氏（℃）　　華氏（°F）\n");
  for(i=0;i<=100;i+=5){
    a4= ondo(i);
 printf("%3d     　　　%5.2f\n",i,a4);


  }
}
double ondo(int i)
{
    double f;
    f=(double)9*i/(double)5+32;
    return f;
}
