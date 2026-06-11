#include <stdio.h>
#include<string.h>
int main() {
    char str[100];
    int length,flag=0;
    int i;
    printf("enter the string;");
    scanf("%s",str); 
    length=strlen(str); 
    for(i=0;i<length/2;i++) 
    { 
        if(str[i]!=str[length-i-1])
        {
            flag=1;
            break;
          }
        } 
    if(flag==0)
    {
     printf("yes %s is A Palindrome",str);
     } 
    else
    {
    printf("%s is not a palindrome",str);
     }
     return 0;
}
