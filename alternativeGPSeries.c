/*

TCS 2018
alternative gp series where odd terms a=1 and common ratio=2
                            even terms a=1 and common ratio=3
*/

#include<stdio.h>
#include<math.h>

int GP1(int); //first number,common ratio4
int GP2(int);
int main()
{
    int n,result;
    scanf("%d",&n);
    if((n%2)!=0) //if(n%2!=0)
    result=GP1((n/2)+1); //odd term gp
    else
    result=GP2((n/2)); //even term gp
    printf("%d",result);
    return 0;
}

int GP1(int n)
{   int tn;
    int a=1,r=2;
    tn=a*pow(r,(n-1));
    return tn;
}


int GP2(int n)
{   int tn;
    int a=1,r=3;
    tn=a*pow(r,(n-1));
    return tn;
}
