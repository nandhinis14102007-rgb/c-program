#include <stdio.h>
int main()
{
  int arr[5];
  int i=0;
  int found=0;
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
          break;
      }
  }
  if(found==1)
  {
  printf("%d is present in array",key);
  }
  else
  {
      printf("%d is  not present in array",key);
  }
return 0;
}
