#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j, arr[n],temp;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);//example index 7 but elements 8 because index starts from 0

    }
   for(int i=0;i<n;i++)
   {
      for(int j=i+1;j<n;j++)
   
    {
        if(arr[i]>arr[j])
        {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        }
        
    } 
    } 
    for(int i=0;i<n;i++)
    {
       printf("%d\n",arr[i]);
    }
    
    return 0;
    
}
