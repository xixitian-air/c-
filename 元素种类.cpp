#include<stdio.h>
#include<string.h>
int main(){
int n,a[1000];
scanf("%d",&n);
for(int i=0;i<n;i++)
scanf("%d",&a[i]);
int temp;
for(int j=0;j<n-1;j++)
{
for(int j1=0;j1<n-1-j;j1++)	
{
if(a[j1]>a[j1+1])
{
temp=a[j1];
a[j1]=a[j1+1];
a[j1+1]=temp;
}
	}		
}
int num=0;
for(int i1=0;i1<n;i1++)
if(a[i1]!=a[i1+1])
num++;
printf("%d",num);


 }
