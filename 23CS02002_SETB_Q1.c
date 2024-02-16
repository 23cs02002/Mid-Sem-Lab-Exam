#include <stdio.h>

int main()
{
    float radius, height, Volume, Surface_Area;
    float pi = 3.14;

    printf("Enter the radius and height of the cylinder:\n");
    scanf("%f%f", &radius, &height);

    Volume = pi * radius * radius * height;
    Surface_Area = 2 * pi * radius * (radius + height);

    if (radius > 0 && height > 0)
    {
        printf("Voulume of the cylinder is: %.2f\n", Volume);
        printf("Surface area of cylinder is: %.2f", Surface_Area);
    }

    else
    {
        printf("Invalid input");
    }

    return 0;
}