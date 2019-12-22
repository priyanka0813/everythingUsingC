//program to print the factorial of a number
#include<stdio.h>
#include<stdlib.h>
int factorialForLoop(int);
int factorialRecurtion(int);
int main()
{
    int factorial=1,n,i,choice,result;
    printf("enter the number");
    scanf("%d",&n);
    while(1)
    {
        printf("\nenter your choice\n 1.Using for loop\n 2.using recursion\n Any other key to exit");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                result=factorialForLoop(n);
                printf("the result is %d",result);
                break;
            case 2:
                result=factorialRecurtion(n);
                printf("the result is %d",result);
                break;
            default:
                exit(0);
            
        }
    }
    
    
    return 0;
    
}

int factorialForLoop(int n)
{
    int i,factorial=1;
    for(i=1;i<=n;i++)
    {
        factorial=factorial*i;
    }
    return factorial;
}

int factorialRecurtion(int n)
{
    if(n<0)
        return -1;
    else if(n<=1)
        return 1;
    else
        return(n*factorialRecurtion(n-1));
}
