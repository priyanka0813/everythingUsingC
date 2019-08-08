/******************************************************************************
program to merge two sorted array
*******************************************************************************/
#include <stdio.h>

void merge(int [],int,int[],int,int[]); //function declaration
void print(int[],int);
int main()
{
    int a[]={2,3,4,5,6};
    int b[]={6,7,8,12,20};
    int n1=sizeof(a)/sizeof(a[0]);
    int n2=sizeof(b)/sizeof(b[0]);
    int c[n1+n2]; //array that will store the resultant
    
    merge(a,n1,b,n2,c);
    printf("the resultant array is \n");
    print(c,n1+n2);

    return 0;
}

void merge(int a[],int n1,int b[],int n2,int c[])
{
    int i=0,j=0,k=0;
    while((i<n1)&&(j<n2))
    {
        if(a[i]<b[j])
        c[k++]=a[i++];
        else
        c[k++]=b[j++];
    }
    
    while(i<n1)
    {
        c[k++]=a[i++];
    }
    while(j<n2)
    {
        c[k++]=b[j++];
    }
}

void print(int c[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\n",c[i]);
    }
}
