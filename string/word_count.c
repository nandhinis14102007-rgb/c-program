#include <stdio.h>
#include<string.h>
int main()
{
    char str[50];
    printf("enter the string:");
   fgets(str,50,stdin);
   int count=0;
   int i=0;
   for(int i=0;str[i]!='\0';i++)
   {
       if(str[i]!=' '&&(i==0||str[i-1]==' '))
       {
           count++;
       }
   }
  printf("word count:%d",count);
  return 0;
}
