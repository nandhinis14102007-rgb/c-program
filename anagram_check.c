#include <stdio.h>
 #include<string.h>
 int main()
 {
     char str1[50]; 
     char str2[50];
     scanf("%s",str1);
     scanf("%s",str2);
     int len;
     int found=0;
     len=strlen(str1); 
     len=strlen(str2);
     if(strlen(str1)!=strlen(str2)) 
     {
         printf("it is not anagram");
         return 0;
    }
     for(int i=0;str1[i]!='\0';i++)
    {
        found=0;
    for(int j=0;str2[j]!='\0';j++)
    {
         if(str1[i]==str2[j])
          {
          str2[j]='*';
          found=1;
          break; }
          }
    if(found==0)
    {
        printf(" not  an angaram");
        return 0;
 }
 }
    printf("anagram"); 
    return 0;
 }
