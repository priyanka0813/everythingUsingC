#include<stdio.h>
int main()
{
    int a[10]={2,4,3,1,0,6};
    int n=6,i,j,pos,small;
    for(i=0;i<n;i++)
    {
        small=a[i];
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(small>a[j])
            {
                small=a[j];
                pos=j;
            }
            
        }
        a[pos]=a[i];
            a[i]=small;
    }
    
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}
