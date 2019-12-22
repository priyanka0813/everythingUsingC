//armstrongwithin a range
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int armstrong(int n)
{
    int temp=n,digit=0,sum=0;
    int i=0;
    while(n>0)
    {
        n=n/10;
        i++;
    } //here i gives the number of digit present in the number
    
    n=temp;
    while(n>0)
    {
        digit=n%10;
        sum=sum+pow(digit,i);
        n=n/10;
    }
    if(sum==temp)
    return 1;
    else
    return 0;
}

int main()
{
    int lb,ub,i=0;
    printf("enter the lower bound and upper bound");
    scanf("%d%d",&lb,&ub);
    for(i=lb;i<=ub;i++)
    {
        if( armstrong(i))
        printf("%d ",i);
    }
    return 0;
}
