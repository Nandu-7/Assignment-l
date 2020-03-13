#include<stdio.h>
int main()
{
	int n,x=2,cnt=0;
	scanf("%d",&n);
	while(cnt==0)
	{
		if(n%x==0)
		cnt+=1;
		
		x+=1;
		if(x==n-1)
		break;
	}
	if(cnt==0)
	printf("Prime");
	else
	printf("Not Prime");
	
return 0;
}