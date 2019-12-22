#include<stdio.h>
int main()
{
    int n,temp=0;
    printf("enter");
    scanf("%d",&n);
    
    int i=0,j=0,a[100];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(a[i]==a[j])
            {   i++;
            }
        }
        printf("%d",a[i]);
    }
    return 0;
}
