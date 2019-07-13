/*

TCS 2018

alternative ap series odd term series a=0, common difference d=2 [a+(n-1)d]
                      even term series a=0, common difference d=1 [n(n+1)]/2
*/

#include<stdio.h>
#include<math.h>

int AP1(int);
int AP2(int);
int main()
{
    int n,result;
    scanf("%d",&n);
    if((n%2)!=0)
    result=AP1((n/2)+1);
    else
    result=AP2(n/2);
    printf("%d",result);
    return 0;
}

int AP1(int n)
{
    int a=0,d=2;
    int value=(a+(n-1)*d);
    return(value);
}
int AP2(int n)
{
    int a=0,d=1;
    int value=(a+((n-1)*d));
    return(value);
}
