#include<stdio.h>
int main(){
	int i,j,a[10],k=0;
	  for(i=0;i<=4;i++){
	 	scanf("%d",&a[i]);
}
       
       for(i=0;i<=4;i++){
        	for(j=i+1;j<=4;j++){
        		if(a[i]==a[j]){
            k++;
		}
      }
  }
  printf("%d",k);
}
