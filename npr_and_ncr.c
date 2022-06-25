*/PROGRAM TO FIND NPR, NCR AND RATIO BETWEEN THEM /*




#include <stdio.h>
#include <stdlib.h>
int fact(int f)
{
	int i=1,s=1;
	if(f==0)
	  return 1;
    else
    {
    	for(i=1;i<=f;i++)
    	     s=s*i;
    	return s;
    }
  }
      int npr(int n,int r)
      {    int s;
    	  s=(fact(n)/fact(n-r));
    	  return s;
      }
      int ncr(int n,int r)
      {
    	  int s;
       s=fact(n)/(fact(n-r)*fact(r));
        return s;
      }
int main() {
	       int x,y,NCR,NPR,s;
	       printf("enter N and R");
	       scanf("%d%d",&x,&y);
	       if(x<y||x==0)
	       {
	    	   printf("enter N greater than or equal to R");
	    	     scanf("%d%d",&x,&y);
	       }
	    	     NPR=npr(x,y);
	    	     NCR=ncr(x,y);
	    	     s=fact(y);
	    	     printf(" npr is :%d\n ",NPR);
	    	     printf(" ncr is : %d\n",NCR);
	    	     printf(" the ratio of npr and ncr : %d\n",s);

	return 0;
}
