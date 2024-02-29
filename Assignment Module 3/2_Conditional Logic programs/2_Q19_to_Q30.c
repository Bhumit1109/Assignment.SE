//2_Q19 to Q30 : Electricity Bill.
#include<stdio.h>
int main()
{
	int id,units;
	char name[50];
	float charge,total,surcharge;
	printf("Enter Consumer ID: ");
	scanf("%d",&id);
	printf("Enter customer name: ");
	scanf("%s",&name);
	printf("Enter Units consumed: ");
	scanf("%d",&units);
	
	if(units<=350)
	{
		charge=1.20;
	}
	else if(units<600)
	{
		charge=1.50;
	}
	else if(units<800)
	{
		charge=1.80;
	}
	else{
		charge=2.00;
	}
	
	printf("\nELECTRICITY BILL\n");
	printf("Consumer ID: %d\n",id);
	printf("Customer Name: %s\n",name);
	printf("Consumed units: %d\n",units);
	printf("Charge per unit: %f\n",charge);
	total=units*charge;
	if(total<256){
		total=256;
		printf("Minimum billing: INR %f",total);
	}
	else if(total>800)
	{
		surcharge=total*0.18;
		printf("Applicable Surcharge(18%%): INR %.2f\n",surcharge);
		total=total+surcharge;
		
	}
     printf("\nTotal Payable Amount: INR %.2f",total);
return 0;
}
