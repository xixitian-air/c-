#include<stdio.h>

int main(){

int m;
double n,x1,x2,x3;
scanf("%d",&m);
for(int i=0;i<m;i++)
{
scanf("%lf",&n);
if(n<0&&n>=-10000)
{
printf("ERROR\n");
}
else if(n>=0&&n<=10000)
{
for(double i1=0;i1<n+1;i1++)
{
if(i1*i1>n) {
x1=i1-1;
break;}
}

for(double i2=0;i2<1;i2+=0.1)
{

if((x1+i2)*(x1+i2)>n)	
{
x2=i2-0.1;	
break;	
} }

for(double i3=0;i3<0.1;i3+=0.01)
{

if((x1+x2+i3)*(x1+x2+i3)>n)	
{
x3=i3-0.01;	
break;	
} }
	
printf("%.2lf\n",x1+x2+x3);
}
}
 }
