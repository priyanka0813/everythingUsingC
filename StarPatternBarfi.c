//ala barfi
#include<stdio.h>

int main()
{
    int n,i,j,k;
    n=4;
    //for upper pyramid part
    for(i=1;i<=n;i++)
    {
        for(k=0;k<n-i;k++)
        {
            printf("  ");
        }
        for(j=1;j<=(2*i)-1;j++)
        {
           printf(" *"); 
        }
        printf("\n");
    }
    
    //for lower pyramid part
    
    for(i=1;i<n;i++)
    {
        for(k=1;k<=i;k++)
        {
            printf("  ");
        }
        for(j=1;j<=(2*(n-i)-1);j++)
        {
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}
