#include <stdio.h>
main()
{
int x = 8;
int y = 5;
int z = 16;

double d1, d2, d1_c, d2_c;

d1 = x/y;
d2 = x/z;  
d1_c = (double)x/(double)y;
d2_c = (double)x/z;
 printf("%.2f\n",d1);
 printf("%.2f\n",d2);
 printf("%.2f\n",d1_c);
 printf("%.2f\n",d2_c);
}
