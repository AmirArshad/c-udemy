#include <stdio.h>
#include <stdlib.h>

int main()
{
   int minutes = 0; //define and initialise minutes
   double years = 0.0; //initialise years
   double days = 0.0; //initialise days

   printf("Please enter number of minutes:");
   scanf("%d",&minutes); //ask user to input minutes

   double minInYear = (365 * 24 * 60); //minutes in a year

   years = (minutes / minInYear);
   days = ((minutes/60.0)/24.0);

   printf("%d minutes is equivalent to:\n%f years or %f days",minutes, years, days);

   return 0;
}