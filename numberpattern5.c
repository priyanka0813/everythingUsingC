/*
3
44
555
6666
555
44
3
*/

#include<stdio.h>

int main()
{
    int i,j,k,count=3;
    int n;
    printf("enter the n");
    scanf("%d",&n); //here n is 4
    
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",count);
        }
        count++;
        printf("\n");
    }
    
    count--;
    for(i=n-1;i>=1;i--)
    {
        count--;
        for(j=i;j>=1;j--)
        {
            printf("%d",count);
        }
        printf("\n");
    }
    
    return 0;
}
