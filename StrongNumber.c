//prrogram to check if a number is strong number or not 
// that is sum of the factorial of the digits is the numberit self

#include<stdio.h>

int factorial(int);

int main()
{
    int number,factDigits[100]={0},digit,i=0;
    int sum=0,temp;
    printf("enter the number \n");
    scanf("%d",&number);
    temp=number;
    while(number>0)
    {
        
        digit=number%10;
        factDigits[i]=factorial(digit);
        i++;
        number=number/10;
    }
    
    for(i=0;i<100;i++)
    {
        sum=sum+factDigits[i];
    }
    printf("the sum is %d",sum);
    if(sum== temp)
    {
        printf("\nstrong number");
    }
    return 0;
    
    }

int factorial(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}

/*
//prrogram to check if a number is strong number or not 
// that is sum of the factorial of the digits is the numberit self

#include<stdio.h>

//int factorial(int);

int main()
{
    int number,digit,i;
    int sum=0,temp,fact;
    printf("enter the number \n");
    scanf("%d",&number);
    temp=number;
    while(number>0)
    {
        i=1;
        fact=1;
        digit=number%10;
        while(i<=digit)
        {
            fact=fact*i;
            i++;
        }
        sum=sum+fact;
        number=number/10;
    }
    
   
    printf("the sum is %d",sum);
    if(sum== temp)
    {
        printf("\nstrong number");
    }
    return 0;
    
    }

*/
