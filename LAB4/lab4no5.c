#include <stdio.h>

int main()
{
	int i,j,a,b;
	scanf("%d%d",&a,&b);
	for (i=0;i < b;i++)
	{
		printf("%d",a);
		for(j=0;j < b;j++)
		printf("%d",a);
		printf("\n");
	}
	return 0;
}
