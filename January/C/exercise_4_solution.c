#include <stdio.h>

/*
FiveFunctionCalculator\

Create a five function calculator (addition, subtraction, division, multiplication, and
modulo/remainder) that prompts the user for one number, the operator character (+, -, *, /, %),
and then another number, and prints the result of the calculation.

Example Output:
Enter in the first number: 5
Enter in the operation: *
Enter in the second number: 20
Result: 100
*/

// here we use a switch statement, which can take a value and compare it and do something for each value it can be
double calculate(int value1, char op, int value2) 
{
    switch (op)
    {
        case '+': return value1 + value2;
        case '-': return value1 - value2;
        case '*': return value1 * value2;
        case '/': return value1 / value2;
        case '%': return value1 % value2;
        default: puts("Invalid Operation, no result returned"); 
    }
    // if the function gets to this point, it's because the user did not enter a valid operation
    // so we return an impossible value and print that the user didn't enter a valid operation
    return __SIZE_MAX__;
}

int main()
{
    int value1, value2;
    char op;

    printf("Enter in the first number: ");
    scanf("%d", &value1);

    printf("Enter in the operation: ");
    scanf("%c", &op);

    printf("Enter in the second number: ");
    scanf("%d", &value2);

    printf("Result: %d", calculate(value1, op, value2));
}