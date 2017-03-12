#include <stdio.h>
main()
{
  double x = 42.8;
  int i = 7;

  printf("点数は%8.6f点です\n", x);
  printf("点数は%5.3f点です\n", x);
  printf("点数は%6e点です\n", x);
  printf("点数は%3E点です\n", x);
  printf("単位数は%05dです\n", i);
  printf("単位数は%5dです\n", i);
  printf("単位数は%-5dです\n", i);
  printf("単位数は%+5dです\n", i);  
}
