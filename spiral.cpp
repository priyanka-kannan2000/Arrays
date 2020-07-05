#include<stdio.h>
main()
{
	int n,val=0;
	scanf("%d",&n);
	int l,r,u,b,i;
	int a[n][n];
	l=0,r=n-1;
	u=0;
	b=n-1;
	while(u<=b && l<=r)
	{
		for(i=l;i<=r;i++)
		{
			val++;
			a[u][i]=val;
		}
		u++;
		for(i=u;i<=b;i++)
		{
			val++;
			a[i][r]=val;
		}
		r--;
		for(i=r;i>=l;i--)
		{
			val++;
			a[b][i]=val;
		}
		b--;
		for(i=b;i>=u;i--)
		{
			val++;
			a[i][l]=val;
		}
		l++;
	}
	for(i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i][j]<n)
				printf("%d  ",a[i][j]);
			else
				printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
