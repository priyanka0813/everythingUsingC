/*star pattern

*
**
***
****
n=4
*/

#include<stdio.h>

void pattern1(int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main()
{
    int i,j,n;
    printf("enter n");
    scanf("%d",&n);
    
    pattern1(n);
    return 0;
}








/*star pattern

****
***
**
*
n=4
*/

#include<stdio.h>

void pattern2(int n)
{
    int i,j;
    for(i=n;i>0;i--)         //for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)     //for(j=0;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main()
{
    int i,j,n;
    printf("enter n");
    scanf("%d",&n);
    
    pattern2(n);
    return 0;
}









/*star pattern
*
**
***
****
***
**
*
n=4
*/

#include<stdio.h>

void pattern3half1(int n)
{
    int i,j;
    for(i=0;i<n-1;i++)         //for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)     //for(j=0;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void pattern3half2(int n)
{
    int i,j;
    for(i=n;i>0;i--)         //for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)     //for(j=0;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main()
{
    int i,j,n;
    printf("enter n");
    scanf("%d",&n);
    
    pattern3half1(n);
    pattern3half2(n);
    return 0;
}










#include<stdio.h>

void pattern(int n)
{
    int i,j,k;
    for(i=0;i<n;i++)
    {
        for(k=0;k<n-i-1;k++)
        {
            printf("  ");
        }
        for(j=0;j<=(2*i);j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
int main()
{
    int n;
    printf("enter nymber\n");
    scanf("%d",&n);
    pattern(n);
    return 0;
}








//inverted pyramid
void pattern2(int n)
{
    int i,j,k;
    for(i=n;i>0;i--)
    {
         for(k=0;k<n-i;k++)
        {
            printf("  ");
        }
        for(j=0;j<2*i-1;j++)
        {
            printf(" *");
        }
       
        printf("\n");
    }
}




//barfi

#include<stdio.h>

void pattern(int n)
{
    int i,j,k;
    for(i=0;i<n;i++)
    {
        for(k=0;k<n-i-1;k++)
        {
            printf("  ");
        }
        for(j=0;j<=(2*i);j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void pattern2(int n)
{
    int i,j,k;
    for(i=n-1;i>0;i--)
    {
         for(k=0;k<n-i;k++)
        {
            printf("  ");
        }
        for(j=0;j<2*i-1;j++)
        {
            printf("* ");
        }
       
        printf("\n");
    }
}
int main()
{
    int n;
    printf("enter nymber\n");
    scanf("%d",&n);
    pattern(n);
    pattern2(n);
    return 0;
}





