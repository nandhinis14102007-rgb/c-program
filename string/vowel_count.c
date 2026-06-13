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
       if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
       {
       count++;
       }
   }
  printf("number of vowel charcter is:%d",count);
  return 0;
}
