#include <stdio.h>
main() {
  double tem;
  int situdo;
  printf("温度と湿度を入れてください\n");
  scanf("%lf%d",&tem,&situdo);
  if(tem<19)
    { printf("温度%f：湿度：%d\n",tem,situdo);
      printf("寒い\n");}
 else if(tem>=19&&tem<29&&situdo<60)
   { printf("温度%f：湿度：%d\n",tem,situdo);
     printf("快適\n");}
 else if(tem>=19&&situdo>=60)
   {printf("温度%f：湿度：%d\n",tem,situdo);
     printf("蒸し暑い\n");}
 else if(tem>=29&&situdo<60)
   {printf("温度%f：湿度：%d\n",tem,situdo);
     printf("暑い\n");}
}
