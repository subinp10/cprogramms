*/program to find product of matrix and its transpose/*

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n=2,i,j,a[n][n],b[n][n],c[n][n],k;
	printf("enter matrix order : ");
	scanf("%d",&n);
    printf("enter your matrix");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
    		scanf("%d",&a[i][j]);
    }
    for(i=0;i<n;i++)
       { printf("\n");
    	   for(j=0;j<n;j++)
       		  printf("%d\t",a[i][j]);
       }

    for(i=0;i<n;i++)
       {
    	   for(j=0;j<n;j++)
       		  c[i][j]=a[j][i];
       }
    for(i=0;i<n;i++)
     {
        for(j=0;j<n;j++)
        {
    	    for(k=0;k<n;k++)
     	      b[i][j]=b[i][j]+(a[i][k]*c[k][j]);
        }
     }
     printf("the product is");
     for(i=0;i<n;i++)
           { 
             printf("\n");
        	    for(j=0;j<n;j++)
           		   printf("%d\t",b[i][j]);
           }
           return 0;

}
