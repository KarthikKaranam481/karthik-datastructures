#include<stdio.h>
int main(){
	int a[10],i,sum=0;
	printf("enter elements in an array:");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++){
		sum+=a[i];
	}
	printf("%d",sum);
}
