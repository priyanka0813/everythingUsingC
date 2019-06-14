/*program to print the pattern 
	*
	* *
	* * *
	* * * *
*/

#include<stdio.h>
void main()
{
int n,i,j;
n=4;

for(i=0;i<n;i++)
{
	for(j=0;j<=i;j++)
	{
		printf("* ");
	}
	printf("\n");
}
}
