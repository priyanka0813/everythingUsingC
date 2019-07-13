/*
 star pattern :
	* * * *
	  * * *
	    * *
	      *
	     
*/

#include<stdio.h>

void main()
{
	int i,j,k,n;
	n=4;
	
	for(i=0;i<n;i++)
	{
		for(k=0;k<=i;k++)
			{
				printf("  ");
		    }
		    
		for(j=0;j<n-i;j++)
		{
		    printf(" *");
		}
		printf("\n");
	}
	
}
