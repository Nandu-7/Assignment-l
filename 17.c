/*sum of series*/
#include<stdio.h>
void main()
{
	int n, sum=0;
	
	printf("\n Enter Value of n:\t ");
	scanf("%d", &n);

	for(int i=1;i<=n;i++)
	{
		sum+=i*i;
	}

    printf("\n Sum = %d", sum);
}