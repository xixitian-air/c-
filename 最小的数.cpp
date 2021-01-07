#include<stdio.h>
#include<string.h>
int main()
{
int a[1000],b,c=0;
for(int i=0;i<10;i++)
scanf("%d",&a[i]);
for(int j=0;j<10;j++)
c+=a[j];
if(c<=50)
{

for(int i1=1;i1<10;i1++)
if(a[i1]!=0)
{
printf("%d",i1);
b=i1;	
break;		
}
for(int i2=0;i2<10;i2++)
{
if(i2==b)
{
for(int i4=1;i4<a[i2];i4++)	
printf("%d",i2);	
}
else
for(int i3=0;i3<a[i2];i3++)	
{
printf("%d",i2);
}
}


}
	}		

  
