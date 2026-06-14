#include <stdio.h>
int main()
{
  int arr[5];
  int i=0;
  int found=0;
  int pos=0;
  for(int i=0;i<5;i++)
  {
      scanf("%d",&arr[i]);
  }
   int key;
   scanf("%d",&key);
   for(int i=0;i<5;i++)
   {
       if(arr[i]==key)
       {
           found=1;
           pos=i+1;
           break;
       }
   }
   if(found==1)
   {
       printf("%d found at  the position:%d",key,pos);
       return 0;
   }
   else
   {
       printf("%d is not found in the array",key);
   }
   return 0;
}
  
