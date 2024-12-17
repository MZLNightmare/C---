#include <stdio.h>
int main (void)
{
	int i,j;
	scanf("%d",&i);
	scanf("%d",&j);
	i = 1;
	while(i<=3)
	{
	printf("Row %d: ", i);
	i++;
	for (j = 1; j<= 5; j++)
	printf("%3d", j);
	printf("\n");
	}
	return 0;
}
