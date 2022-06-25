*/PROGRAM TO PRINT THE FACTORS OF A NUMBER/*


#include <stdio.h>
#include <stdlib.h>

int main() {
	int i,n;
	printf("enter your number");
	scanf("%d",&n);
	if(n==0)
         {
		printf("enter number greater than zero");
		  scanf("%d",&n);
	}
	printf("the factors of the number is \n");
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
			printf("%d\t",i);
	}

	return 0;
}
