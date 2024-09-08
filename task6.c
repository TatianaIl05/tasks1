#include <stdio.h>

int main()
{
    FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");

    int n, i = 1, min = 10001, max = -10001, number, position1, position2;
    fscanf(input, "%d", &n);
    
    while (i <= n)
    {
        fscanf(input, "%d", &number);
        if (number > max)
        {
            max = number;
            position2 = i;
        }
        if (number < min)
        {
            min = number;
            position1 = i;
        }
        i++;
    }
    
    fprintf(output, "%d %d %d %d", min, position1, max, position2);

    fclose(input);
    fclose(output);

    return 0;
}
