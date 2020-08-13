#include<stdio.h>
/*
There is a colony of 8 cells arranged in a straight line where each day every cell competes with its adjacent cells(neighbour).
Each day, for each cell, if its neighbours are both active or both inactive, the cell becomes inactive the next day,. 
otherwise itbecomes active the next day.

Assumptions: The two cells on the ends have single adjacent cell, so the other adjacent cell can be assumsed to be always inactive. 
Even after updating the cell state. consider its pervious state for updating the state of other cells. 
Update the cell informationof allcells simultaneously.

Sample Input 
1 0 0 0 0 1 0 0  
1  
Sample Output 
0 1 0 0 1 0 1 0
*/
main()
{
	int cells[10],i,j;
	int days;
	scanf("%d",&days);
	for(i=1;i<=8;i++)
	scanf("%d",&cells[i]);	
	for(i=0;i<days;i++)
	{
		cells[0]=0;cells[9]=0;
		int a[10];
		for(int k=0;k<=9;k++)
		a[k]=cells[k];
		for(j=1;j<=8;j++)
		{
			if(a[j-1]==a[j+1])
			{
				cells[j]=0;
			}
			else
			cells[j]=1;
		}
	}
	for(int l=1;l<=8;l++)
	printf("%d",cells[l]);
}
