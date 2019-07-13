/*

string 1 ---replace vowels with "

string 2--- replace consonants with *

string 3--- convert all to uppercase

using c TCS
*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str1[1000],str2[1000],str3[1000];
    int i;
    fgets(str1,sizeof(str1),stdin);
    
    int len1=strlen(str1);
    if(len1>0&&str1[len1-1]=='\n')
    str1[len1-1]='\0';
    
    
    fgets(str2,sizeof(str2),stdin);
    int len2=strlen(str2);
    if(len2>0&&str2[len2-1]=='\n')
    str2[len2-1]='\0';
    
    
    fgets(str3,sizeof(str3),stdin);
    int len3=strlen(str3);
    if(len3>0&&str3[len3-1]=='\n')
    str3[len3-1]='\0';
    
    
    for(i=0;str1[i]!='\0';i++)
    {
        if(str1[i]=='a'||str1[i]=='A'||str1[i]=='e'||str1[i]=='E'||str1[i]=='i'||str1[i]=='I'||str1[i]=='o'||str1[i]=='O'||str1[i]=='u'||str1[i]=='U')
        str1[i]='"';
    }
    
    for(i=0;str2[i]!='\0';i++)
    {
        if(str2[i]!='a'&&str2[i]!='A'&&str2[i]!='e'&&str2[i]!='E'&&str2[i]!='i'&&str2[i]!='I'&&str2[i]!='o'&&str2[i]!='O'&&str2[i]!='u'&&str2[i]!='U')
        str2[i]='*';
    }
    
    for(i=0;str3[i]!='\0';i++)
    {
        str3[i]=toupper(str3[i]);
    }
    puts(str1);
    puts(str2);
    puts(str3);
    return 0;
}
