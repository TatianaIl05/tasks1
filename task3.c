#include <stdio.h>

int main()
{
    int n, i, number, sum = 0;
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        scanf("%d", &number);
        if (number % 2 == 0)
        {
            sum += number;
        } 
    }

    printf("%d\n", sum);

    return 0;
}
