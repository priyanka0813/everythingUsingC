//c program t dynamically allocate memory in array
//here we use calloc coz we wish to initialize the whole array with 0
//in case if we don't wish to do so the we may use
// int *arr=(int*)malloc(n*sizeof(int));


#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("enter the total number of elements \n");
    scanf("%d",&n);
    int *arr;
    arr=(int*)calloc(n,sizeof(int));
    int i=0;
    printf("enter the elements of the array");
    for(i=0;i<n-1;i++)
    {
        scanf("%d",(arr +i));
    }
    printf("the elements of the array are \n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",*(arr+i));
    }
    return 0;
}
