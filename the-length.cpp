#include<stdio.h>
#include<string.h>
int main()
{
	char s[1000];
	fgets(s,1000,stdin);
	printf("%d",strlen(s)-1);
	return 0;
 } 
