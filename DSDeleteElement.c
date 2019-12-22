//program to delete an element from the given std::array<

#include<stdio.h>

int main()
{
    int a[10]={4,7,3,9,8,1};
    int n=6;
    int i,element,pos,flag=0;
    printf("enter the element \n");
    scanf("%d",&element);
    
    for(i=0;i<n;i++)
    {
        if(element==a[i])
        {
            pos=i;
            flag=1;
            break;
        }
    }
    
    if(flag==1)
    {
        printf("the element is present at post %d\n",pos+1);
        for(i=pos;i<n;i++)
        {
            a[i]=a[i+1];
        }
    }
    else
    printf("the element is not present\n");
    
    for(i=0;i<n-1;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
