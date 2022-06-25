*/classification students on marks/*


#include <stdio.h>
#include <stdlib.h>

int main() {
	int n,a[n],i,j=0,k=0;
	printf("enter number of students\n");
	scanf("%d",&n);
	printf("\n enter mark of students out of 600");
	for(i=0;i<n;i++)
	{	scanf("%d",&a[i]);
	 if(a[i]>300)
		 j++;
	 if(a[i]<300)
		 k++;
	}
	printf("the number of students who scored above average : %d",j);
	printf("\n the number of students who scored exactly average : %d",(n-(j+k)));
	printf("\n the number of students who scored below average : %d",k);

	return 0;
}
