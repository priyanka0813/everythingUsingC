//program to find the nth prime number
//2,3,5,7,11,13,....

#include<stdio.h>
#define max 1000
int prime(int);
int main()
{
	int n,result;
	printf("enter the nth term you want to find\n");
	scanf("%d",&n);
	result=prime(n);
	printf("%d",result);
	return 0;
}

int prime(int n)
{
	int i,j,flag=0,count=0;
	for(i=2;i<max;i++) //this determines the range
	{
		flag=0;
		for(j=2;j<i;j++) //we divide the i by j, for i=2 the condition j<i doesn't satisfy 
		{
			if(i%j==0)
			{
				flag=1;
				break;	
			}	
		}
		if(flag==0)
		{
			if(++count==n) //now this part is important to return only the nth! term
			{
				return i;
			}
		}
	}
}
