//program to see is a number is pronic number or not 

#include<stdio.h>
#include<math.h>

int main()
{
    int n,flag=0;;
    printf("enter the number");
    scanf("%d",&n);
    
    for(int i=1;i<=(int)sqrt(n);i++)
    {
        if(n==i*(i+1))
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("%d is a pronic number",n);
    }
    else
    printf("not a prnic integer");
    return 0;
}

