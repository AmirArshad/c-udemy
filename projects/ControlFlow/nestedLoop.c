#include <stdio.h>

int main(void)
{
    for(int i = 1 ; i <= 5 ; ++i)
        {
            int sum = 0;

            for(int j = 1;j<=i;++j)
                sum += j;
            
            printf("%d\n",sum);
        }

    //example of continue - continue basically skips the rest of the block in the loop
    enum Day {Mon, Tue, Wed, Thur, Fri, Sat, Sun};

    for(enum Day day = Mon ; day<= Sun ; ++day)
        {
            if(day == Wed)
            {
                printf("It's Wednesday my dude!\n");
                continue;
            }
            printf("It's not Wednesday\n");
        }

    //example of break - fully breaks the loop
    enum Month {Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec};

    for(enum Month month = Jan ; month<= Dec ; ++month)
        {
            if(month == Jun)
            {
                printf("It's your birthday go celebrate!\n");
                break;
            }
            printf("It's just another month\n");
        }

    return 0;
}