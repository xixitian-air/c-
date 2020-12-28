#include<stdio.h>
#include<string.h>
int main() 
{
 int b[2000];
 b[0]=0;
 char a[2000];
 gets(a);
 int len,k=0;
 len =strlen(a);
 for(int i=0;i<len;i++)
 {
 if(a[i]==' ')
 {
 b[k+1]=i;	
 k++;		
 }	
 }
 b[k+1]=len;
 for(int j=0;j<k+1;j++)
 {
 for(int h = b[j+1];h>b[j];h--)
 {
 printf("%c",a[h-1]);	 	
 if(j==0&&h==b[j]+1)
 printf(" ");
 }    
 }
return 0;
}
	
	
	
