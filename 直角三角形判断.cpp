#include<stdio.h> 
int main()
{
 int i,n,a[1000];
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[0]);	
  scanf("%d",&a[1]);
  scanf("%d",&a[2]);
  if(a[0]+a[1]>a[2]&&a[1]+a[2]>a[0]&&a[0]+a[2]>a[1]){
  
   if(a[0]*a[0]+a[1]*a[1]==a[2]*a[2]||a[2]*a[2]+a[1]*a[1]==a[0]*a[0]||a[0]*a[0]+a[2]*a[2]==a[1]*a[1])
  printf("Yes\n");
   else
   printf("No\n");
   }
  else
  printf("No\n");
  
	 }	
 return 0;
	
	

 } 
