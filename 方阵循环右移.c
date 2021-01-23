#include <stdio.h>
int main()
{
	int n,m,i,t,j;
	scanf("%d %d",&m,&n);
	int a[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{	
		t=a[i][j];
		a[i][j]=a[i][n-m];
        a[i][n-m]=t;
	    } 
    }
	  for(i=0;i<n;i++)
	  {
	  	for(j=0;j<n;j++)
         {
         	printf("%2d ",a[i][j]);
		 }
		 printf("\n");	
	  }
	  
	
	return 0;
	
	
} 
