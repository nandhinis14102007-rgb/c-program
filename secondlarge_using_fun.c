#include <stdio.h>
int secondlargest(int arr[],int n);
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int result;
    result=secondlargest(arr,n);
    printf(" secondlargest element is %d",result);
    return 0;
}
int secondlargest(int arr[],int n)
{  
    int i=0;
    int largest=arr[i];
    int secondlargest=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>largest)
        { 
            secondlargest=largest;
            largest=arr[i];
        }
        else if(arr[i]!=largest&&arr[i]>secondlargest)
        {
            secondlargest=arr[i];
        }
    }
return secondlargest;    
}
