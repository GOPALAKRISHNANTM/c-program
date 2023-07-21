#include<Stdio.h>
int main()
{
    int i,j,k,temp,a[i];
    printf("enter k value:");
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<k;i++)
    {
        for(j=i+1;j<k;j++)
        {
            if(a[i]>a[j])
            {
               temp=a[i];
               a[i]=a[j];
               a[j]=temp;
            }
        }
        printf("%d",a[i]);
    }
    return 0;
}
