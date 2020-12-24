#include<stdio.h> 
int main()
{
 int n,i,a[100],m;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 m=a[0];
 for(i=0;i<n-1;i++){
 if(m*m<a[i+1]*a[i+1])
 m=a[i+1];
 }
 printf("%d",m);
 return 0;
	
	

 } 
