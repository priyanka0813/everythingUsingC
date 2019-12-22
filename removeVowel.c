#include<stdio.h>
#include<string.h>

int checkvowel(char ch)
{
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        return 0;
    }
    else
    return 1;
}

int main()
{
    char str[100],i,j=0;
    printf("enter the string ");
    fgets(str,sizeof(str),stdin);
    int len=strlen(str);
    if(len>0&&str[len-1]=='\n')
    str[len-1]='\0';
    
    char temp[100];
    for(i=0;str[i]!='\0';i++)
    {
        if(checkvowel(str[i]))
        {
            temp[j]=str[i];
            j++;
        }
    }
    temp[j]='\0';
    puts(temp);
    strcpy(str,temp);
    puts(str);
    return 0;
}
