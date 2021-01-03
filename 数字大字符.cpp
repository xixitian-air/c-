#include<stdio.h>
#include<string.h>
int main(){
char a[1000];
int m,n,len;
scanf("%d\n",&n);
for(int i=0;i<n;i++)
{
m=1;	
gets(a);
len=strlen(a);
printf("%s:\n",a);
for(int j=0;j<len;j++)
{	
switch(a[j])
{
case '0': case'2':case'3':case'5':case'6':case'7':case'8':case'9':printf("*****  ");break;
case '1':printf("    *  ");break;
case '4':printf("*   *  ");break;
}	
}
printf("\n");
for(int j=0;j<len;j++)
{	
switch(a[j])
{
case '0':case'4':case'8':case'9':printf("*   *  ");break;
case '1':case'2':case'3':case'7':printf("    *  ");break;
case '5':case'6':printf("*      ");break;
}	
}
printf("\n");
for(int j=0;j<len;j++)
{	
switch(a[j])
{
case '0':case'4':case'8':case'9':printf("*   *  ");break;
case '1':case'2':case'3':case'7':printf("    *  ");break;
case '5':case'6':printf("*      ");break;
}
}
printf("\n");
for(int j=0;j<len;j++)
{	
switch(a[j])
{
case '0':printf("*   *  ");break;
case '1':case'7':printf("    *  ");break;
case '2':case'3':case'4':case'5':case'6':case'8':case'9':printf("*****  ");break;
}	
}
printf("\n");
for(int j=0;j<len;j++)
{	
switch(a[j])
{
case '0':case'6':case'8':printf("*   *  ");break;
case '1':case'3':case'4':case'5':case'7':case'9':printf("    *  ");break;
case '2':printf("*      ");break;

}	
}
printf("\n");
for(int j=0;j<len;j++)
{	
switch(a[j])
{
case '0':case'6':case'8':printf("*   *  ");break;
case '1':case'3':case'4':case'5':case'7':case'9':printf("    *  ");break;
case '2':printf("*      ");break;
}	
}
printf("\n");
for(int j=0;j<len;j++)
{	
switch(a[j])
{
case '0':case'2':case'3':case'5':case'6':case'8':case'9':printf("*****  ");break;
case '1':case'4':case'7':printf("    *  ");break;


}	
} 
printf("\n");
}
 return 0;
 }
