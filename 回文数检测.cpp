#include<stdio.h>
#include<string.h>
int main()
{
char a[1000];
int m,n,len;
scanf("%d\n",&n);
int i=0;
for(int i=0;i<n;i++)
{
m=1;	
gets(a);
len=strlen(a);
for(int j=0;j<len/2;j++)
{
if(a[j]!=a[len-j-1]){
  m=0;}	
}
if(m==0)
printf("no\n");
if(m==1)
printf("yes\n");
}
}
