#include <stdio.h> 
void frequencycount(int arr[] ,int n);
int main()
{
     int n;
     scanf("%d",&n);
     int arr[n];
     for(int i=0;i<n;i++) 
     {
         scanf("%d",&arr[i]);
     }
     isduplicate(arr,n);
     return 0;
}
void frequencycount(int arr[],int n)
{  
    int i=0;
    int duplicate=0; 
    int count=0; 
     for(int i=0;i<n;i++) 
     { 
         duplicate=0; 
        for(int j=0;j<i;j++)
        {
            if(arr[i]==arr[j]) 
            {
             duplicate=1;
             break;
            }
         }
    if(duplicate==1)
    {
        continue;
    }
         count=0;
    for(int k=0;k<n;k++) 
    {
     if(arr[i]==arr[k])
      {
       count++; 
       } 
    }
     printf("%d-> %d\n",arr[i],count);
}
    
    }
