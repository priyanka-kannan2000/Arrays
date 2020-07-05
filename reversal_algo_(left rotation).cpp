#include<stdio.h>
void reverse(int a[],int start,int end)
{
	while(start<end)
	{
		int t=a[start];
		a[start]=a[end];
		a[end]=t;
		start++;
		end--;
	}
}
main()
{
	int n,i,j,a[100],d;
	scanf("%d%d",&n,&d);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	reverse(a,0,d-1);
	if(d!=0)
	reverse(a,d,n-1);
	if(d!=0)
	reverse(a,0,n-1);
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
}
