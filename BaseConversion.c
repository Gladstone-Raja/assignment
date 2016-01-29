#include<stdio.h>

int main()
{
	int n,b,i=0,j;
	char a[50];
	
	printf("\nEnter the number:");
	scanf("%d",&n);
	printf("\nEnter the base:");
	scanf("%d",&b);

	while(n>0)
	{
		a[++i]=n%b;
		n=n/b;
	}

	printf("\nThe value is:");
	for(j=i;j>0;j--)
	{
		if(a[j]<10)
		{
			printf("%d",a[j]);
		}
		else
		{
			printf("%c",a[j]+55);	
		}
	}

	return 0;
}