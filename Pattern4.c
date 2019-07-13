/*
 star pattern :
 	      *
 	    * *
 	  * * *
	* * * *
*/

#include<stdio.h>

void main()
{
	int i,j,n;
	n=4;
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if((n-1-j)>i)
				printf("  ");
			else
				printf(" *");
			
		}
		printf("\n");
	}
	
}
