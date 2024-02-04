#include<stdio.h>
int main(){
	int a[10],i,n;
	scanf("%d",&n);
	printf("enter values in the array:");
	 for(i=0;i<=n;i++){
	 	scanf("%d",&a[i]);
	 }
	  for(i=n;i>=0;i--){
	 	printf("%d ",a[i]);
	 }
}
