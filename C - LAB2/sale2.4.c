#include <stdio.h>

int main()
{
	int p1,p2,p3,s1,s2,discount1,sum1,sum2;
	float total1,total2,total3,vat1,vat2,vat3;
	printf("Enter Price:");
	scanf("%d",&p1);
	discount1 = p1*0.05;
	total1 = p1-discount1;
	vat1 = total1 + (total1*0.07);
	printf("Total Price:%.2f\n",vat1);
	
	printf("Enter Price:");
	scanf("%d",&p2);
	sum1 = p1+p2;
	total2 = sum1-(sum1*0.15);
	vat2 = total2 + (total2*0.07);
	printf("Total Price:%.2f\n",vat2);
	
	printf("Enter Price:");
	scanf("%d",&p3);
	sum2 = sum1+p3;
	total3 = sum2-(sum2*0.30);
	vat3 = total3 + (total3*0.07);
	printf("Total Price:%.2f\n",vat3);
	
}
