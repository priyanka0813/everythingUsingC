//program to reverse a number

#include<stdio.h>
int main()
{
    int n;
    printf("enter");
    scanf("%d",&n);
    
    int temp=n,rev=0,rem=0;
    while(n>0)
    {
        rem=n%10;
        rev=10*rev+rem;
        n=n/10;
    }
    printf("%d",rev);
    return 0;
}
