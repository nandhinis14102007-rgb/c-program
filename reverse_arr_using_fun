#include <stdio.h>
void reversingarr(int arr[],int n);
int main() {
    int arr[5];
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    reversingarr(arr,5);
    return 0;
}
void reversingarr(int arr[],int n)
{  
    int i=0;
    int temp;
    for(int i=0;i<5/2;i++)
    {
      temp=arr[i];
      arr[i]=arr[5-i-1];;
      arr[5-i-1]=temp;
    }
    for(int i=0;i<5;i++)
    {
    printf(" %d",arr[i]);
    }
}
