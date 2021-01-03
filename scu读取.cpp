#include<stdio.h>
#include<string.h>
int main(){
 int n;
 double a[1000],sum;
 scanf("%d",&n);
 for(int i=0;i<n;i++) 
 scanf("%lf",&a[i]);
 for(int j=0;j<n;j++)
 sum+=a[j];
 printf("%.2lf",sum/n); 
 return 0;
 }
