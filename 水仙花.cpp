#include <stdio.h>
int fl(int a){
int b,c,d;
b=a/100;
c=(a-100*b)/10;
d=a-100*b-10*c;
if(b*b*b+c*c*c+d*d*d==a)
return a;
else 
return -1;	
}

int main ()
{
int i,k=0, t, m[1000], n[1000], h;
h=-1;
scanf("%d",&t);
for(i=0;i<t;i++){
scanf("%d %d",&m[i], &n[i]);
}

while(1){
for(i=m[k];i<n[k];i++){
if(m[k]>=100&&m[k]<=999&&n[k]>=100&&n[k]<=999&&m[k]<=n[k]){
if(i==fl(i)){
printf("%d ",i);	
h=1;
}
}	
}
if(h==-1)
printf("%d\n",h);
k++;
if(k==t)
break;	
}
}
