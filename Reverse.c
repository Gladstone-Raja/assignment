#include<stdio.h>

int main()
{
	int n,rev = 0;
	printf("\nEnter n:");
	scanf("%d",&n);
	while (n != 0)
	{
		rev = (rev*10) + n%10;
		n = n/10;
	}
	printf("\nReverse of n: %d",rev);
	return 0;
}