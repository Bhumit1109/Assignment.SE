#include<stdio.h>
int main()
{
	float cost,mrp,profit,loss;
	printf("Enter cost and selling price of the product:\n");
	scanf("%f %f",&cost,&mrp);
	if(mrp>cost)
	{
		profit=mrp-cost;
		printf("Profit: %f",profit);
	}
	else if(mrp<cost)
	{
		loss=cost-mrp;
		printf("Loss: %f",loss);
	}
	else{
		printf("No Profit_No Loss.");
	}
	return 0;
}
