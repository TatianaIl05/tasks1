#include <stdio.h>
#include <math.h>

int main()
{
    FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");

    int n, m, p, k, l;
    fscanf(input, "%d", &n);
    fscanf(input, "%d %d %d %d", &m, &p, &k, &l);

    double num_of_flats = floor(m/(l*(p-1) + (k-1)));
    int entran = (int)(floor(ceil(n/num_of_flats)/l) + 1);
    int level = (int)ceil(n/num_of_flats) % l;

    fprintf(output, "%d %d", entran, level);

    fclose(input);
    fclose(output);
    
    return 0;
}
