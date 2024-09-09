#include <stdio.h>


int main()
{  
    FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");

    long long answer = 0, v;

    fscanf(input, "%lld", &v);

    for (long long i = 1; i*i*i <= v; i++)
    {
        for (long long m = i; m*m <= v/i; m++)
        {
            long long min = m;
            long long max = v/(i*m);
            answer += max - min + 1;
        }
    }

    fprintf(output, "%lld", answer);

    fclose(input);
    fclose(output);

    
    return 0;
}
