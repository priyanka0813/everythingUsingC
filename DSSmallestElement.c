//program to find the smallest element

#include<stdio.h>
int main()
{
int a[10]={2,6,1,8,9,0}; //n=6
int f=a[0];
int i;

for(i=0;i<6;i++)
{
    if(f>a[i])
    {
        f=a[i];
    }
}
printf("the smallest element is %d",f);
return 0;
}
