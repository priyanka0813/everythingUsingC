/*
given series -----  odd terms are fibonacci series starting from 1 if(n%2!=0) result=fibonacci((n/2)+1)
                    and even terms are prime series  starting from 2
                    find the nth term 
TCS 2018
*/

#include<stdio.h>
#define max 1000

int prime(int);
int fibonacci(int);
int main()
{
    int n,result;
    scanf("%d",&n);
    if((n%2)==0)
    result=prime(n/2);
    else
    result=fibonacci((n/2)+1); //because it is odd
    printf("%d",result);
    return 0;

}

int prime(int n)
{
    int i,j,flag=0,count=0;
    for(i=2;i<max;i++)   //for(i=2;i<=n/2;i++)
    {
        flag=0;
        for(j=2;j<i;j++) //for(j=2;j<=i/2;j++) for range
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
            
        }
        if(flag==0)
        {
            if(++count==n) //(++count==n) 
            {
                return i;
                
            }
        }
    }
}

int fibonacci(int n)
{
   int first,second,next;
   first=1;
   second=1;
   if(n==1)
   return first;
   else if(n==2)
   return second;
   else
   {
   while(n>2)
   {
       next=first+second ;
      first=second;
      second=next;
      n--;
   }
   return next;
   }
}

/*
int fibonacci(int n)
{
    int first=1,second=1,next,i;
    if(n==1)
    return first;
    else if(n==2)
    return second;
    else
    {
        for(i=3;i<=n;i++)
        {
            next=first+second;
            first=second;
            second=next;
        }
        return next;
    }
    
}
*/
