#include<stdio.h>
int main()
{
	int n,sum,i;
	printf("number");
	scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
	
	if(n%2==0)
	printf("even");
	else
	printf("odd");
	
	sum=sum+i;
}
	printf("sum=%d",sum);
}
