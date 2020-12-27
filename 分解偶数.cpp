

#include<stdio.h> 
int jud(int x)
{
 int n;
 for(int i=2;i<x;i++){
  if(x%i==0){
  
    n=0;
    break;}

  else{
   n=1;
   continue; 	
 }
}
 return	n; 
}

int main()
 {
 int n,m=0;
 scanf("%d",&n);
 for(int i=3;i<n/2+1;i++){
 if(jud(i)==1&&jud(n-i)==1){
 printf("%d %d\n",i,n-i);
 m=1;
}
 else	
 continue;
 }
 if(m==0)
 printf("ERROR");
	
return 0;
 }


