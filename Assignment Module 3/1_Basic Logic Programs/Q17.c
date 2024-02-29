#include <stdio.h>
int main() 
{
    float salary,PRrate,Premium;

    // Input salary and percentage premium rate
    printf("Enter your annual salary: ");
    scanf("%f", &salary);

    printf("Enter the percentage of salary for insurance premium (For Example:'5' for 5%%): ");
    scanf("%f", &PRrate);

    // Calculate insurance premium
    Premium=salary*(PRrate/100);

    // Display the result
    printf("Your insurance premium is:INR %.2f\n",Premium);

    return 0;
}

