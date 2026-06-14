#include <stdio.h>
int main()
{
  int arr[5];
  int i=0;
  int found=0;
  int pos=-1;
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
           
           pos=i+1;
       }
   }
   if(pos!=-1)
   {
       printf(" last occurence of the key is:%d",pos);
       return 0;
   }
   else
   {
       printf("%d is not found in the array",key);
   }
   return 0;
}
  
