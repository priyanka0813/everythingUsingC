//the famous trapezoidal pattern

#include<stdio.h>
int main()
{
    int i,j,k,n;
    
    printf("enter the number");
    scanf("%d",&n);
    
    int left=1,right=(n*n)+1;
    for(i=n;i>0;i--)
    {
        for(k=0;k<n-i;k++)
        {
            printf("_ ");
        }
        for(j=i;j>0;j--)
        {
            printf("%d*",left);
            left++;
        }
        for(j=i;j>0;j--)
        {
            printf("%d",right);
            if(j>1)
            printf("*");
            right++;
        }
        printf("\n");
        right=right-(i-1)*2 -1;
    }
    
    
    return 0;
}
