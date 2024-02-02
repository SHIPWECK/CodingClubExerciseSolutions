#include <iostream>

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
    int firstNum, secondNum;
    std::cout << "Enter in the first number: ";
    std::cin >> firstNum;

    std::cout << "Enter in the second number: ";
    std::cin >> secondNum;

                                                    // std::max() returns the greater of the two numbers
    std::cout << "The greater of the two numbers is: " << std::max(firstNum, secondNum);
}