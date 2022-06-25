*/SUM OF FIRST 100 SQAURE NUMBERS/*


#include <stdio.h>
#include <stdlib.h>

int main() {
	int i,sum;
	for(i=1;i<=100;i++)
		sum=sum+(i*i);
	printf("the sum is : %d",sum);
	return 0;
}
