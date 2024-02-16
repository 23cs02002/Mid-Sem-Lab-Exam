#include <stdio.h>

int check_num(int num)
{
    int i;
    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return 1;
            break;
        }
    }
    if (i == num)
    {
        return 0;
    }
}

int main()
{
    int num, count = 0;
    printf("Enter the number:\n");
    scanf("%d", &num);

    for (int i = 1; i <= num / 2; i++)
    {
        int part1 = i;
        int part2 = (num - i);

        if (check_num(part1) & check_num(part2))
        {
            printf("%d %d\n", part1, part2);
            count++;
        }
    }

    if (count == 0)
    {
        printf("%d cannot be represented as the sum of two composite numbers.\n", num);
    }

    return 0;
}