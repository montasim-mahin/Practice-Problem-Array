#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    int arr[x][y];
    for(int i = 0; i < x; i++)
    {
        for(int j = 0; j < y; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int cn1 = 0;
    int index = -1;
    for(int i = 0; i < x; i++)
    {
        int count = 0;
        for(int j = 0; j < y; j++)
        {
            if(arr[i][j] == 1)
            {
                count++;
            }
        }
        if(cn1 < count) 
        {
            cn1 = count;
            index = i;
        }
    }
    printf("%d\n", index);
    return 0;
}