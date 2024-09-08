#include <stdio.h>

int main()
{
    FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");

    int h, m, s, k;
    fscanf(input, "%d %d %d %d", &h, &m, &s, &k);
    s += k;

    if (s >= 60)
    {
        m += s/60;
        s %= 60;
    }
    if (m >= 60)
    {
        h += m/60;
        m %= 60;
    }
    if (h >= 24)
    {
        h %= 24;
    }

    fprintf(output, "%d %d %d", h, m, s);

    fclose(input);
    fclose(output);
    
    return 0;
}
