// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a ,i,j,temp,small;
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<a-1;i++)
    {
        small = i;
        for(j=i+1;j<a;j++)
        {
            if(arr[j]<arr[small])
             small = j;
        }
        temp = arr[small];
        arr[small]=arr[i];
        arr[i]=temp;

    }
    for(i=0;i<a;i++)
     printf("%d",arr[i]);
    return 0;
}
