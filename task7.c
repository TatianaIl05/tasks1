#include <stdio.h>
#include <math.h>

int main()
{
    FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");

    int n, m, p, k, l;
    fscanf(input, "%d", &n);
    fscanf(input, "%d %d %d %d", &m, &p, &k, &l);

    int num_of_flats = m/(l*(p-1) + (k-1));
    int level;
    int entran;
    if (n % (num_of_flats*l) == 0)
    {
        level = n/l;
        entran = n/(num_of_flats*l);
    }
    else
    {
        level = (n % (num_of_flats*l)) / num_of_flats;
        entran = n/(num_of_flats*l) + 1;
    }

    fprintf(output, "%d %d", entran, level);

    fclose(input);
    fclose(output);

    return 0;
}
