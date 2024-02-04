#include <stdio.h>
int main()
{
	int i,n;
	printf("enter the size of the array");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements");
	for(i=0;i<n;i++)
	{
	  scanf("%d",&a[i]);
    }

    printf("\nthe elements stored in an array are");
    for(i=0;i<n;i++)
	{
	  printf(" %d",a[i]);
    }
}
