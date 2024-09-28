
  #include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j, arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }
    int count=0,not_found=-1;
    for(int i=0;i<n;i++)
    {
        for(int j = 0; j < n; j++)
        if(arr[i]==arr[j])
    {
       count++;

    }
     if(count>(n/2))
        {
            not_found = arr[i];
            break;
        }
    }
    printf("majority elements:%d\n",not_found);
return 0;
}




