//program to print all the prime num er sin the given range

#include<stdio.h>
int main()
{
    
    int lb,up,i,j;
    printf("enter  the lower boud and upper bound\n");
    scanf("%d%d",&lb,&up);
    int flag=0;
    printf("the prime numbers within the range are \n");
    for(i=lb;i<=up;i++)
    {
        for(j=2;j<=i/2;j++)
        {
            flag=0;
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }
        
        if(flag==0&&i!=1)
        printf("%d\n",i);
        
    }
    return 0;
}
