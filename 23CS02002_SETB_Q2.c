#include <stdio.h>

int perfect_number(int num)
{
    int sum = 0;
    for (int i = 1; i <= (num/2); i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }

    return ((sum == num) ? 1 : 0);
}

int printPerfectNumbers(int a, int b)
{
    int j, count = 0;
    for (j = a; j <= b; j++)
    {
        if (perfect_number(j))
        {
            printf("%d\n", j);
            count++;
        }
    }

    if (count == 0)
    {
        printf("No perfect numbers exist in this interval");
    }
}

int main()
{
    int lower_limit, upper_limit;

    printf("Enter the lower and upper limit of interval:\n");
    scanf("%d%d", &lower_limit, &upper_limit);

    if (lower_limit > 0 && upper_limit > 0 && lower_limit < upper_limit)
    {
        printf("Perfect numbers:\n");
        printPerfectNumbers(lower_limit, upper_limit);
    }

    else {
        printf("Invalid input");
    }
    return 0;
}