/*
1
3 2
4 5 6
10 9 8 7
*/


#include<stdio.h>

int main()
{
    int i,j,flag=0;
    int n,count=0;
    
    printf("enter n ");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            count+=i;
            for(j=1;j<=i;j++)
            {
                if(j<i)
                    printf("%d ",count);
                else
                    printf("%d",count);
                    
                count--;
              
                //count++;
            }
              count+=i;
        }
        
        
        else
        {
            for(j=1;j<=i;j++)
            {
                count++;
                printf("%d ",count);
            }
        }
        printf("\n");
    }
    return 0;
}
