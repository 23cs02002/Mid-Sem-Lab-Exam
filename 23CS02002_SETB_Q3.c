#include <stdio.h>
#include <math.h>

int main()
{
    float x, y, r, x1, y1;
    printf("Enter the x and y coordinates of the center of the circle respectively:\n");
    scanf("%f%f", &x, &y);

    printf("Enter the radius of the circle:\n");
    scanf("%f", &r);

    printf("Enter the x and y coordinates of the point respectively:\n");
    scanf("%f%f", &x1, &y1);

    float dist_sq = (x1 - x) * (x1 - x) + (y1 - y) * (y1 - y);
    float dist = sqrt(dist_sq);

    if (r > 0)
    {
        if (dist < r)
        {
            printf("The point (%f,%f) lies inside the circle\n", x1, y1);
        }

        else if (dist == r)
        {
            printf("The point (%f,%f) lies on the circle\n", x1, y1);
        }

        else
        {
            printf("The point (%f,%f) lies outside the circle\n", x1, y1);
        }
    }

    else
    {
        printf("invalid input\n");
    }

    return 0;
}