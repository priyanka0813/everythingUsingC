#include<stdio.h>
#include<math.h>
int main()
{
	int a,array[10],i;
	
	printf("enter the number ");
	scanf("%d",&a);
	
	while(a!=0)
	{
		i=0;
		array[i]=a%10;
		a=a/10;
		i++;
		printf("%d \n",array[i]);
	}
	printf("program successful...");
}

