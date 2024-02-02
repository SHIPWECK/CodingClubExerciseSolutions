#include <stdio.h>

/* 
RectangularArea
When working in an international environment, you’ll have to present information in both
metric and Imperial units. And you’ll need to know when to do the conversion to ensure
the most accurate results. Create a program that calculates the area of a room. Prompt
the user for the length and width of the room in feet. Then display the area in both square feet
and square meters.
Example Output:
What is the length of the room in feet? 15
What is the width of the room in feet? 20
You entered dimensions of 15 feet by 20 feet.
The area is
300 square feet
27.871 square meters
The formula for this conversion is:
m^2 = f^2 × 0.09290304 
*/

int main()
{
    int length, width;
    printf("What is the length of the room? ");
    scanf("%d", &length);

    printf("What is the width of the room? ");
    scanf("%d", &width);

    printf("You entered dimensions of %d feet by %d feet. \n", length, width);

    int area = length * width;
    double areaInMeters = area * 0.09290304;

    puts("The area is");
    printf("%d square feet\n", area);
    printf("%lf square meters\n", areaInMeters);
}