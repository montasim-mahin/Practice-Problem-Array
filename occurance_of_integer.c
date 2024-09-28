#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a;
    scanf("%d",&a);
    int count = 0;
    int arr[n];
   
  
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i] == a)
        {
            count++;
        }
    }
    if(count != 0)
    {
        printf("the given number found :%d\n",count);
    }
    else
    {
        printf("%d not found\n", a);
    }
    return 0;
}

