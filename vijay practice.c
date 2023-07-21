#include<stdio.h>
int main()
{
    int n;
    printf("number of ele want:");
    scanf("%d",&n);
    int i,arr[n];
    printf("enter array ele:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("your elements:");
    for(i=0;i<n;i++)
    {
        printf("\n%d\n",arr[i]);
    }
    return 0;
}
