#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//program to reverse a string

int main()
{
    char str[100],i,j=0,temp[100];
    printf("enter the string ");
    fgets(str,sizeof(str),stdin);
    int len=strlen(str);
    if(len>0&&str[len-1]=='\n')
    str[len-1]='\0';
    
    for(i=len-2;i>=0;i--)
    {
        temp[j]=str[i];
        j++;
    }
    temp[j]='\0';
    
    puts(temp);
    return 0;
}
