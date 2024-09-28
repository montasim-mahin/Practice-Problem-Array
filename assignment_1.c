//montasim-mahin

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i, arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);//example index 7 but elements 8 because index starts from 0

    }
    int  max=arr[0];
    int min=arr[0];
    for(int i=1;i<n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
        else if(min>arr[i])
        {
            min=arr[i];
        }
    }
    printf("max:%d\n",max);
    printf("min:%d\n",min);
    return 0;

}