#include <stdio.h>
int main()
{
	int score;
	printf("Enter Score:");
	scanf("%d",&score);
	if ( score >= 68)
	{
		if (score >= 85)
	{
		printf("A");
	}
	    else if (score >= 75)
	{
		printf("B");
	}
	    else if (score >= 65)
	{
		printf("C");
	}
    }
    
    else
    {
    	if (score >= 55)
	{
		printf("D");
	}
	    else
	{
		printf("F");
	}	
	}

	return 0;
}

