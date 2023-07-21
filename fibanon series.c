#include<stdio.h>
int main()
{
int i,n,a=1,b=1,tot;
printf("enter a no:");
scanf("%d",&n);
for(i=1;i<=n-2;i++)
{
tot=a+b;
a=b;
b=tot;
}
printf("%d",tot);
}
