//arm strong number or not 
// if sum of the cube of the digits of a three digit number is the number itself

#include<stdio.h>

int main()
{
    int number,sum=0,i,digit;
    printf("enter the number \n");
    scanf("%d",&number);
    int temp=number;
    i=0;
    while(number>0)
    {
        number=number/10;
        i++;  //to check totl number of digits
    }
    number=temp;
    while(number>0)
    {
        digit=number%10;
        sum=sum+pow(digit,i);
        number=number/10;
        
    }
    printf("%d",sum);
    if(sum==temp)
    printf("\narm strong number");
    return 0;
}
