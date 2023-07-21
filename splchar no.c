#include<stdio.h>
#include<string.h>
int main()
{
    char a[80],ch;
    printf("enter a kolaru string:");
    scanf("%[^\n]s",a);
    int i,k;
    k=strlen(a);
    for(i=0;i<k/2;i++)
    {
        if(!((a[i]>='65' && a[i]<='90')||(a[i]>='97' && a[i]<='122')||(a[i]>='48' && a[i]<='57')))
            a[i]=a[i];
        else
        {
            ch=a[i];
            a[i]=a[k-i-1];
            a[k-i-1]=ch;
        }
    }
    printf("%s",a);
}
