#include <stdio.h>
int main()
{
	int score,n;
	int A = 0;
	int B = 0;
	int C = 0;
	int D = 0;
	int F = 0;
	printf("\nEnter Score");
	scanf("%d",&score);
	while(score!=-1)
	{
		if (score >= 85)
		{
		printf("%d(A)",score);
		A++;
		}
		else if (score >= 75)
		{
		printf("%d(B)",score);
		B++;
		}
		else if (score >= 68)
		{
		printf("%d(C)",score);
		C++;
		}
		
		else
		{
		if (score >= 55)
		{
			printf("%d(D)",score);
			D++;
		}
		else
		{
			printf("%d(F)",score);
			F++;
		}	
		}
	printf("\nEnter Score");
	scanf("%d",&score);
	}
	printf("\n%d(A)",A);
	printf("\n%d(B)",B);
	printf("\n%d(C)",C);
	printf("\n%d(D)",D);
	printf("\n%d(F)",F);
	return 0;
}

