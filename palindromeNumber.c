//program to check if a number is palindrome or not_eq
//rn is the reversed number
//r is the remainder

//reversed number =reversed number*10+remainder

#include<stdio.h>
int main()
{
    int rn=0,n,temp;
    n=1211;
    temp=n;
    
    while(n>0)
    {
        int r;
        r=n%10;
        n=n/10;
        rn=rn*10+r;
        
    }
    
    if(temp==rn)
    printf("palindrome");
    else
    printf("not palindrome");
    return 0;
}
