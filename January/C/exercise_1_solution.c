#include <stdio.h>

/*
MaxOfTwo
Create a program that prompts for two numbers, inputs them, and prints the greater of the two
numbers.
Example Output:
Enter in the first number: 1
Enter in the second number: 3
The greater of the two numbers is: 3
*/

int main()
{
    int value1, value2;
    printf("Enter the first number: ");
    scanf("%d", &value1);

    printf("Enter the second number: ");
    scanf("%d", &value2);

    // using a terenary operator (this looks intimidating but its simpler than you thing)
    // it allows us to write an if statement on one line! Here's how to make one:
    // before the question mark, put a bool (in this case, value1 > value2)
    // after the question mark, write what you want if the bool is true
    // after the colon, put what you want if the bool is false
    printf("The greater of the two numbers is: %d\n", value1 > value2 ? value1 : value2);

    // using an if statement
    if (value1 > value2)
        printf("The greater of the two numbers is: %d", value1);
    else
        printf("The greater of the two numbers is: %d", value2);
}