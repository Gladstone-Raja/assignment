#include<stdio.h>
void subset(int *array,int n)
{
     int i,j;
     int count = 1 << n;
     for(i=0;i<count;i++)
     {
         int limit=1;
         for(j=0;j<=limit;j++)
         {
             if(limit & i)
                {
                    printf(" %d ",array[j]);
                }
             limit = limit<<1;
         }
         printf("\n");
     }
}

int main()
{
    int n,array[10],i,j;
    int *a = array;
    printf("\nEnter number of elements:");
    scanf("%d",&n);
    printf("\nEnter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    subset(a,n);
    return 0;
}
