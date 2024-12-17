#include <stdio.h>

int main()
{
	int i,j,b;
	char a;
	scanf("%c%d",&a,&b);
	for (i=0;i < b;i++)
	{
		printf("%c",a);
		for(j=0;j < b;j++)
		printf("%c",a);
		printf("\n");
	}
	return 0;
}
