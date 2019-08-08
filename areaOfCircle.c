//program to print the area of a circle 

#include<stdio.h>
#include<math.h>
#define pi 3.14
float areaCircle(int r)
{
    return pi*pow(r,2);
}

int main()
{
    int radius;
    float result;
    printf("enter the radius ");
    scanf("%d",&radius);
    result=areaCircle(radius);
    printf("%.2f",result); //the result is round off to 2 decimal point
    return 0;
}

