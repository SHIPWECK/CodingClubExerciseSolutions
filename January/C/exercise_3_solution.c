#include <stdio.h>
#include <time.h>

/*
RetirementCalculator

Your computer knows what the current year is, which means
you can incorporate that into your programs. You just have
to figure out how your programming language can provide
you with that information.

Create a program that determines how many years you have
left until retirement and the year you can retire. It should
prompt for your current age and the age you want to retire
and display the output as shown in the example that follows.

Example Output:
What is your current age? 25
At what age would you like to retire? 65
You have 40 years left until you can retire.
It's 2015, so you can retire in 2055
*/

int main()
{
    int currentAge, retireAge;
    printf("What is your current age? ");
    scanf("%d", &currentAge);
    
    printf("At what age would you like to retire? ");
    scanf("%d", &retireAge);

    int yearsUntilRetirement = retireAge - currentAge;
    printf("You have %d years left until you can retire.\n", yearsUntilRetirement);

    time_t currentTime = time(NULL); // get the current time (just a number)
    struct tm *time = localtime(&currentTime); // convert the time to a struct with readable time
    // tm_year gives us the years since 1900, so we have to add it to get the current year
    int currentYear = time->tm_year + 1900; 

    printf("It's %d, so you can retire in %d", currentYear, currentYear + yearsUntilRetirement);
}