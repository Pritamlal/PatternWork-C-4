#include<stdio.h>
int main()
{
	int i,j,n,s;
	printf("Enter the number::");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		for(s=1;s<n-i;s++)
		printf("  ");
		for(j=1;j<=(2*i-1);j++)
		printf("* ");
		printf("\n");
	}
}
