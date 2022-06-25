*/PROGRAM TO CALCULATE SUM OF NUMBERS UPTO FIRST NEGATIVE NUMBER/*


#include <stdio.h>
#include <stdlib.h>

int main() {
	int a[20],i,sum=0;
	printf("enter 20 elements");
	for(i=0;i<20;i++)
		scanf("%d",&a[i]);
	for(i=0;i<20;i++)
	{
		if(a[i]>0)
		  sum=sum+a[i];
	    else
		    break;
	}
	printf("the sum is : %d",sum);

	return 0;

}
