//c program to check if a string is palindrome or not_eq
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    int len1,len2,flag=0;
    printf("enter the string\n");
    scanf("%s",&str1);
    len1=strlen(str1);
    /*
    fgets(str1,sizeof(str1),stdin);
    len1=strlen(str1);
    if(len1>0&&str1[len1-1]=='\n');
    str1[len1-1]='\0';
    */
    int i=0;
    for(i=0;str1[i]!='\0';i++)
    { printf("%d",flag);
        if(str1[i]!=str1[len1-i-1])
        {
            flag=1;
            break;
        }
    }
   
    
    if(flag==0)
    //puts("palindrome");
    printf("%s is palindrome",str1);
    else
    //puts("not palindrome");
    printf("%s is not palindrome",str1);
    return 0;
}
