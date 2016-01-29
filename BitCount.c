#include<stdio.h>

int main()
{
	int n,count=0;
	printf("\nEnter the number:");
	scanf("%d",&n);
	if(n==0)		
	{
		printf("\nThe no.of bits required to represent : %d",++count);
	}
	else
	{
		while(n>0)
		{
			count++;
			n=n/2;	
		}
		printf("\nThe no.of bits required to represent : %d",count);
	}
	return 0;
}