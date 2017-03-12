#include <stdio.h>

int kaijo( int );

main()
{
  int i, x;

  while(1)
  {
      printf("Input number less than 13 -> ");
      scanf("%d", &x);

      if ( x < 0 || x > 12 ) break;

      printf("The factorial of %d is %d \n", x, kaijo( x )  );
  }
}

int kaijo(int t)
{
  if(t <= 1)
    return 1;

  return t * kaijo(t-1);
}



