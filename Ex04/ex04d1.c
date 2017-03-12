#include <stdio.h>
main() {
  int year,jikkan,juunisi;
  printf("西暦を入力してください\n");
  scanf("%d",&year);
  jikkan=year%10;
  juunisi=year%12;
  switch(jikkan){
  case 0:
    printf("十干は「庚」\n");
   
    break;
case 1:
    printf("十干は「辛」\n");
   
    break;
case 2:
    printf("十干は「壬」\n");
    
    break;
case 3:
    printf("十干は「癸」\n");
    
    break;
case 4:
    printf("十干は「甲」\n");
   
    break;
case 5:
    printf("十干は「乙」\n");
   
    break;
case 6:
    printf("十干は「丙」\n");
    
    break;
case 7:
    printf("十干は「丁」\n");
    
    break;
case 8:
    printf("十干は「戊」\n");
    
    break;
case 9:
    printf("十干は「己」\n");
 
    break;
  }
  switch(juunisi){
  case 0:
    printf("十二支は「申」\n");
    break;
case 1:
    printf("十二支は「酉」\n");
    break;
case 2:
    printf("十二支は「戌」\n");
    break;
case 3:
    printf("十二支は「亥」\n");
    break;
case 4:
    printf("十二支は「子」\n");
    break;
case 5:
    printf("十二支は「丑」\n");
    break;
case 6:
    printf("十二支は「寅」\n");
    break;
case 7:
    printf("十二支は「卯」\n");
    break;
case 8:
    printf("十二支は「辰」\n");
    break;
case 9:
    printf("十二支は「巳」\n");
    break;
case 10:
    printf("十二支は「午」\n");
    break;
case 11:
    printf("十二支は「未」\n");
    break;
}
}

