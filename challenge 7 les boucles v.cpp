#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,U0=1,U1=1,Un,i;
	printf(" donnez la valeur de n  :  ");
	scanf("%d",&n);
	if(n<1){
		printf("entrez un valeur superieure de 2  :");
	}else if(n==0 ||n==1)
	{
		printf("U%d =1",n);
		
	}
	
	for(i=2;i<=n;i++){
    Un=U0+U1;
    U0=U1;
    U1=Un;
	
	}
	
	printf(" U %d = %d ",n,Un);
	return 0;
}
