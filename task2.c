#include <stdio.h>

int main()
{
    FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");

    int x, y, z, s = 0;
    fscanf(input, "%d %d %d", &x, &y, &z);

    if (x > 0 && y > 0 && z > 0)
    {
        s = 2 * (x*y + y*z + x*z);
    }
    else if (x <= 0)
    {
        s = -1;
    }
    else if (y <= 0)
    {
        s = -2;
    }
    else
    {
        s = -3;
    }

    fprintf(output, "%d\n", s);

    fclose(input);
    fclose(output);

    return 0;
}
