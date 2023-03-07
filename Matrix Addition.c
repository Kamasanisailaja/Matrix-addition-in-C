#include<stdio.h>
void main()
{
	int i,j,m,n,a[10][10],b[10][10],c[10][10];
	printf("enter no.of rows:");
	scanf("%d",&m);
	printf("enter no.of columns:");
	scanf("%d",&n);
	printf("enter the first matrix elements:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("First matrix is:\n");
    for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("enter the second matrix elements:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("Second matrix is:\n");
    for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	printf("sum of two matrices is:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d  ",c[i][j]);
		}
		printf("\n");
	}
	
	
}
