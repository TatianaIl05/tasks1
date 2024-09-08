#include <stdio.h>

int main()
{
    FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");

    int n, sum = 0;
    fscanf(input, "%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    
    fprintf(output, "%d", sum);

    fclose(input);
    fclose(output);

    return 0;
}
