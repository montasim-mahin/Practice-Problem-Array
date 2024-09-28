#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int posArr[n];
    int negArr[n];
    int posIndex = 0;
    int negIndex = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] < 0)
        {
            negArr[negIndex] = arr[i];
            negIndex++;
        }
        else
        {
            posArr[posIndex] = arr[i];
            posIndex++;
        }
    }
    for(int i = 0; i < negIndex; i++)
    {
        printf("%d ", negArr[i]);
    }
    for(int i = 0; i < posIndex; i++)
    {
        printf("%d ", posArr[i]);
    }
    return 0;
}