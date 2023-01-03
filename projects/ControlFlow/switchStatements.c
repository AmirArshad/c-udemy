#include <stdio.h>
#include <stdlib.h>

int main()
{
    //switch statements can be used instead of lots of else ifs
    enum Weekday {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};
    enum Weekday today = Thursday;

    switch(today)
    {
        case Sunday:
            printf("Today is Sunday.\n");
            break;
        case Monday:
            printf("Today is Monday.\n");
            break;
        case Tuesday:
            printf("Today is Tuesday.\n");
            break;
        case Friday:
        case Thursday: //can print the same output for 2 cases if you exclude break
            printf("Today is Thursday or Friday.\n");
            break;
        default:
            printf("Have no idea.\n");
            break;
    }

    //example with user input
    float val1, val2;
    char operator;

    //ask user to type in maths expression. eg. 1+1
    printf("Type in an expression:\n");
    scanf("%f%c%f",&val1,&operator,&val2);

    switch(operator)
    {
        case '+':
            printf("%.2f.\n",val1+val2);
            break;
        case '-':
            printf("%.2f.\n",val1-val2);
            break;
        case '*':
            printf("%.2f.\n",val1*val2);
            break;
        case '/':
            printf("%.2f.\n",val1/val2);
            break;
        default:
            printf("Unknown operator.\n");
            break;
    }

    return 0;
}