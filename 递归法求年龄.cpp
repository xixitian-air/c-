#include<stdio.h> 
int cal(int x,int y,int z)
{
 if (x<=1)
 return y;
 else 
 return z+cal(x-1,y,z);	
	
}
int main()
{
 int n, a, k;
 scanf("%d %d %d",&n, &a, &k);
 if (a<=100&&k<=100&&n>=2)
 {
 	
  printf("%d",cal(n,a,k));	
 	
 }
	
  else
  printf("Wrong Number");
  return 0;	
	

 } 
