//program to check a number is prime nmber or not

#include<stdio.h>
int main()
{
    int n;
    int flag=0;
    scanf("%d",&n);
    for(int i=2;i<=n/2;i++) //if n=2 it doesnt enter the forloop 2/2=0 and i not less than 0
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
        
    }
    if(flag==0&&n!=1)
    {
        printf("%d is a prime number",n);
    }
    else
    printf("not a prime number ");
    return 0;
}

