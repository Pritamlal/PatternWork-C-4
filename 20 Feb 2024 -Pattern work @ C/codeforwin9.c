#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter the number::");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=0;j<=n-i;j++)
		printf("* ");
		printf("\n");
	}
}
