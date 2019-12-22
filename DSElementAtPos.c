//to enter an element in the given positon 

#include<stdio.h>
int main()
{
    int a[10]={4,7,3,9,8,1};
    int n=6;
    int i,pos,element;
    printf("enter the position and element \n");
    scanf("%d%d",&pos,&element);
    
    for(i=n-1;i>=pos-1;i--)
    {
        a[i+1]=a[i];
    }
    a[pos-1]=element;
    printf("the resultant array is \n");
    for(i=0;i<=n;i++)
    {
        printf("%d",a[i]);
        printf("%d");
    }
    return;
}
