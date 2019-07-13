//c program to print frequency of characters in a string
#include<stdio.h>
#include<string.h>

int main()
{
    int count[26]={0}; //initialization is important
    int len,i;
    char str1[1000];
    
    printf("enter a string \n");
    
    fgets(str1,sizeof(str1),stdin);
    len=strlen(str1);
    if(len>0&&str1[len-1]=='\n')
    str1[len-1]='\0';
    
    for(i=0;i<str1[i]!='\0';i++)
    {
        if(str1[i]>='a'&&str1[i]<='z')
        {
            int x=str1[i]-'a';
            count[x]++;
        }
    }
    
    for(i=0;i<26;i++)
    {
        if(count[i]!=0)
        {
            printf("the frequency of %c is %d \n",i+'a',count[i]);
        }
    }
    return 0;
}
