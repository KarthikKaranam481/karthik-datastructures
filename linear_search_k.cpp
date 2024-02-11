#include<stdio.h>
int main()
{
	int n,i,h,count=0;
	printf("enter the size of the array:");
	scanf("%d",&n);
	int a[n];
	printf("\nenter the array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the element which you want to search:");
	scanf("%d",&h);
	for(i=0;i<n;i++)
	{
	  if(h==a[i])
	  {
	  printf("%d",i);
	  	count++;
	  }
}
		if(count==0)
	      printf("no number found");
	      return 0;
}
