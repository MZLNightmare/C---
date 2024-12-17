#include <stdio.h>
int main()
{
	int score,n;

printf("\nEnter Score");
		scanf("%d",&score);
	while(score!=-1)
	{
		if (score >= 85)
		{
		printf("%d(A)",score);
		}
		else if (score >= 75)
		{
		printf("%d(B)",score);
		}
		else if (score >= 68)
		{
		printf("%d(C)",score);
		}
		
		else
		{
		if (score >= 55)
		{
			printf("%d(D)",score);
		}
		else
		{
			printf("%d(F)",score);
		}	
		}
	printf("\nEnter Score");
		scanf("%d",&score);
	}
	return 0;
}

