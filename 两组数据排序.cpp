#include<stdio.h>
int com(int *x,int m,int n){
	int t;
	for(int j=0;j<m+n+1;j++){
	for(int i=n+m-1;i>j;i--){
		if(x[i]>x[i-1]){
		t=x[i];
		x[i]=x[i-1];
		x[i-1]=t;	
		}
	}
}
return 0;
}		
int main()
{
int a[2][1000],n1,n2,b[1000],s;
scanf("%d %d",&n1, &n2);
for(int i1=0;i1<n1;i1++)
scanf("%d",&a[0][i1]);
for(int i2=0;i2<n2;i2++)
scanf("%d",&a[1][i2]);
for(int j1=0;j1<n1;j1++)
b[j1]=a[0][j1];
for(int j2=0;j2<n2;j2++)
b[n1+j2]=a[1][j2];
int temp;
for(int g=0; g<n1+n2-1; g++){
for(int f=0; f<n1+n2-1-g; f++){
if(b[f] > b[f+1]){
temp = b[f];
b[f] = b[f+1];
b[f+1] = temp;
            }
        }
    }
    for(int i=0; i<n1+n2; i++){
        printf("%d ", b[i]);
    }
    printf("\n");
   
		
}


		 
