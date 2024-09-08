#include <stdio.h>

int main()
{
    FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");

    int n, i, number, sum = 0;
    fscanf(input, "%d", &n);

    for (i = 1; i <= n; i++)
    {
        fscanf(input, "%d", &number);
        if (number % 2 == 0)
        {
            sum += number;
        } 
    }

    fprintf(output, "%d\n", sum);

    fclose(input);
    fclose(output);

    return 0;
}
