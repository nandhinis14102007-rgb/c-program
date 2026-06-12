#include <stdio.h>
int largest(int arr[],int n);
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int result;
    result=largest(arr,n);
    printf("largest element is %d",result);
    return 0;
}
int largest(int arr[],int n)
{  
    int i=0;
    int largest=arr[i];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
    }
return largest;    
}
