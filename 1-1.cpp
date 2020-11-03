#include <stdio.h>

int main()
{int a, x, y, z, v;
 printf("enter a dollar amount\n");
 scanf("%d",&a);
 x=a/20;
 y=(a-20*x)/10;
 z=(a-20*x-10*y)/5;
 v=(a-20*x-10*y-5*z)/1;
 printf("20$=%d 10$=%d 5$=%d 1$=%d",x, y ,z, v);
 return 0;
}
