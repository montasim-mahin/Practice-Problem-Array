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
    printf("reverse values\n");
    for(int i=n-1;i>=0;i--)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
    
}