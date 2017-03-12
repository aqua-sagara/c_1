#include <stdio.h>
main()
{
  int a[10][3],n,i,b,c,d=0;
  for(i=0;i<10;i++){
    a[i][0]=i+1;
  }
  for(i=0;i<10;i++){
    a[i][1]=a[i][0]*a[i][0];
  }
  for(i=0;i<10;i++){
    a[i][2]=a[i][0]*a[i][0]*a[i][0];
  }
  printf("３乗値を入力してください！\n");
  scanf("%d",&n);
  for(i=0;i<10;i++){
    if(a[i][2]==n){
    b=a[i][0];
    c=a[i][1];
  printf("%dの３乗根=%d\n",n,b);
  printf("%dの2乗=%d\n",b,c);
    }
    else d++;

  
  }if(d==10)
     printf("該当値がありません\n");
}
