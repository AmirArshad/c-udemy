#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hours = 0; //hours worked
    int payRate = 12; //$12.00 per hour
    int overtimeRate = 18; //$18.00 per hour after 40hours work
    int grossPay = 0;
    float taxes = 0;
    float netPay = 0.0;

    printf("Please enter how many hours you worked:");
    scanf("%i",&hours);

    //calculate grossPay based on whether they did overtime
    if (hours <= 40)
        grossPay = (hours * payRate);
    else 
        grossPay = (40 * payRate) + ((hours - 40) * overtimeRate);

    //calculate tax and net pay based on tax bracket
    if (grossPay <= 300)
        {
            taxes = (0.15 * grossPay);
            netPay = grossPay - taxes;
        }
    else if (grossPay > 300 && grossPay <= 450)
        {
            taxes = ((0.15 * 300) + (0.2 * (grossPay - 300)));
            netPay = grossPay - taxes;
        }
    else if (grossPay > 450)
        {
            taxes = ((0.15 * 300) + (0.2 * 150) + (0.25 * (grossPay - 450)));
            netPay = grossPay - taxes;
        }

    printf("Your gross pay is $%i\nYou have to pay $%.2f in tax\nYour net pay is $%.2f\n",grossPay,taxes,netPay);
    

    return 0;
}