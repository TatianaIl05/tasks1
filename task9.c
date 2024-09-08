#include <stdio.h>

int main()
{
    FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");

    long long answer, v;
    answer = 1000000000;
    answer = answer * 1000000000;
    fscanf(input, "%lld", &v);

    for (int i = 1; i <= v; i++)
    {
        for (int m = i; m <= v; m++)
        {
            for (int n = m; n <= v; n++)
            {
                if (i*m*n <= v)
                {
                    answer += 1;
                }
            }
        }
    }

    answer %= 1000000000;
    answer %= 1000000000;

    fprintf(output, "%lld", answer);

    fclose(input);
    fclose(output);
    
    return 0;
}
