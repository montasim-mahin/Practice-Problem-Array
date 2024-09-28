#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i, arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }
   
    int a=n-1;
    int b=arr[a];
     
    for(i=a;i>0;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=b;
   
    for(int i=0;i<n;i++)
    {
          printf("%d\n",arr[i]);
    }
 
   
      
    
    return 0;
    
}











