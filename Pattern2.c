/*program to print the pattern 
	
	* * * *
	* * *
	* *
	*
*/

#include<stdio.h>
void main()
{
int n,i,j;
n=4;

for(i=0;i<n;i++)
{
	for(j=i;j<n;j++)
	{
		printf("* ");
	}
	printf("\n");
}
}
