//binary search technique

#include<stdio.h>
int main()
{
    int a[20]={6,8,9,12,15,17,23,28,45,89,90},element,low=0,high,mid,n;
    int flag=0;
    n=11;// total number of element present;
    printf("enter the element ");
    scanf("%d",&element);
    
    high=n-1;
    while(low<=high)
    {
        mid=(high+low)/2;
        if(a[mid]==element)
        {
            flag=1;
            printf("the element is found at index pos %d",mid);
            break;
        }
        
        else if(a[mid]<element)
            low=mid+1;
        else
            high=mid-1;
    }
    if(flag==0)
    {
        printf("sorrry the element is not found\n");
    }
    return 0;
}

