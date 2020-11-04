#include <stdio.h>
#include <stdlib.h>
 
int Day(int y,int m,int d);
 
int main(int argc, char *argv[]) {
    int i;  //循环变量
    int year,month,day;  //读取用户输入的年月日
    int days;  //储存从1900-1-1到该天的天数
    int week=0;  //储存求余后的星期
    //字符串组合输出星期
    char b[]={"星期"};
    char c[7][4]={"日","一","二","三","四","五","六"};
     
loop:printf("Please enter the date (mm/dd/yy) ：（/分隔）\n");
    scanf(" %d/%d/%d",&month,&day,&year);
    days=Day(year,month,day);
    //增强程序的健壮性
    if(days==-1)
    {
        printf("输入格式有误，");
        fflush(stdin);  //防止用户输入字母等其他非数字字符
        goto loop;
    }
    else
    {
        week=days%7;  //用求余计算星期几
        printf("Dated this %d", day);
  switch (day) {
    case 1: case 21: case 31:
      printf("st"); break;
    case 2: case 22:
      printf("nd"); break;
    case 3: case 23:
      printf("rd"); break;
    default: printf("th"); break;
  }
    printf(" day of ");
    switch (month) {
    case 1:  printf("January");   break;
    case 2:  printf("February");  break;
    case 3:  printf("March");     break;
    case 4:  printf("April");     break;
    case 5:  printf("May");       break;
    case 6:  printf("June");      break;
    case 7:  printf("July");      break;
    case 8:  printf("August");    break;
    case 9:  printf("September"); break;
    case 10: printf("October");   break;
    case 11: printf("November");  break;
    case 12: printf("December");  break;
  }

        printf(", 20%.2d.\n", year);

        printf("%d %d %d is %s%s\n",year,month,day,b,c[week]);
    }
    system("pause");
    return 0;
}
 
//函数功能：输入年月日，输出1900-1-1到该天的天数，-1位输入不合法
int Day(int y,int m,int d)
{
    int i;
    int r=0;  //储存1900到该天的闰年个数
    int a[]={31,28,31,30,31,30,31,31,30,31,30}; //m给每出月的天数
 
    if(y>=1900 && m>0 && m<13 && d>0 && d<32)
    {
        for(i=1900;i<=y;i++)  //计算闰年的个数
        {
            if(i%400==0||i%100!=0&&i%4==0)
                r++;
        }
        for(i=0;i<m-1;i++)  //统计当年1月1日到当月的天数
        {
            d+=a[i];
        }
        if((y%400==0||y%100!=0&&y%4==0)&&m<3)  //如果当年是闰年但不到二月就不能算进去
            r--;
        return 365*(y-1900)+r+d;
    }
    else
        return -1;
}
