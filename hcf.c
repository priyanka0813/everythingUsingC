//program to find GDC (greatest common divisor)
//program to find the highest common factor

#include<stdio.h>

int main()
{
    int a,b,hcf;
    int i;
    printf("enter the two numbers \n");
    scanf("%d%d",&a,&b);
    for(i=1;i<=a&&i<=b;i++)
    {
        if((a%i==0)&&(b%i==0))
        {
            hcf=i;
        }
    }
    
    printf("the hcf of the two numbers are %d",hcf);
    return 0;
}
