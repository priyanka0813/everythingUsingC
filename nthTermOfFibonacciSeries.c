#include<stdio.h>

int fibonacci(int);
int main()
{
	int n,result;
	printf("enter the nth term you want to find\n");
	scanf("%d",&n);
	result=fibonacci(n);
	printf("%d",result);
	return 0;
}

int fibonacci(int n)
{
   int first,second,next;
   first=1;
   second=1;
   if(n==1)
   return first;
   else if(n==2)
   return second;
   else
   {
   while(n>2)
   {
       next=first+second ;
      first=second;
      second=next;
      n--;
   }
   return next;
   }
}
