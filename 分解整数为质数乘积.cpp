#include<stdio.h>> 

int main() {
	
	int a, n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
	scanf("%d",&a);
	int k=2;
	while(a>k)
	{
		if(a%k==0)
		{
			printf("%d*",k);
			a/=k;
		}else
		{
			k++;
		}
	}
	printf("%d\n",a);
	}
	return 0;
}
