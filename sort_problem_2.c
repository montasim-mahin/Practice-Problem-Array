#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int count0 = 0, count1 = 0, count2 = 0;
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if(arr[i] == 0)
        {
            count0++;
        }
        else if(arr[i] == 1)
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }
    for(int i = 1; i <= count0; i++)
    {
        printf("0 ");
    }
    for(int i = 1; i <= count1; i++)
    {
        printf("1 ");
    }
    for(int i = 1; i <= count2; i++)
    {
        printf("2 ");
    }
    printf("\n");
    return 0;
}