//program to check whether a year is a leap year or not 

#include<stdio.h>
int main()
{
	int year;
	printf("\nEnter the year :");
	scanf("%d",&year);
	
	if(year%4==0) //a leap year must be always divisile by 4
	{
		if(year%100==0) //in case if it is a century year endingwith 00
		{
			if(year%400==0) //it must be divisible by 400 to be a leap year
			
				printf("\nLeap year");
			else
				printf("not a leap year");
			
		}
		else
			printf(" a leap year");
	}
	else
		printf("not a leap year");
	return 0;
}
