#include <stdio.h>
#include <stdlib.h>
 
int Day(int y,int m,int d);
 
int main(int argc, char *argv[]) {
    int i;  //ѭ������
    int year,month,day;  //��ȡ�û������������
    int days;  //�����1900-1-1�����������
    int week=0;  //��������������
    //�ַ�������������
    char b[]={"����"};
    char c[7][4]={"��","һ","��","��","��","��","��"};
     
loop:printf("Please enter the date (mm/dd/yy) ����/�ָ���\n");
    scanf(" %d/%d/%d",&month,&day,&year);
    days=Day(year,month,day);
    //��ǿ����Ľ�׳��
    if(days==-1)
    {
        printf("�����ʽ����");
        fflush(stdin);  //��ֹ�û�������ĸ�������������ַ�
        goto loop;
    }
    else
    {
        week=days%7;  //������������ڼ�
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
 
//�������ܣ����������գ����1900-1-1�������������-1λ���벻�Ϸ�
int Day(int y,int m,int d)
{
    int i;
    int r=0;  //����1900��������������
    int a[]={31,28,31,30,31,30,31,31,30,31,30}; //m��ÿ���µ�����
 
    if(y>=1900 && m>0 && m<13 && d>0 && d<32)
    {
        for(i=1900;i<=y;i++)  //��������ĸ���
        {
            if(i%400==0||i%100!=0&&i%4==0)
                r++;
        }
        for(i=0;i<m-1;i++)  //ͳ�Ƶ���1��1�յ����µ�����
        {
            d+=a[i];
        }
        if((y%400==0||y%100!=0&&y%4==0)&&m<3)  //������������굫�������¾Ͳ������ȥ
            r--;
        return 365*(y-1900)+r+d;
    }
    else
        return -1;
}
