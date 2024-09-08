#include <stdio.h>
#include <math.h>

int main() {
    FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");

    int A, B;
    fscanf(input, "%d %d", &A, &B);

    int div_down = floor((double)A / B);
    int div_up = ceil((double)A / B);
    int div_to_zero = (A >= 0) ? floor((double)A / B) : ceil((double)A / B);
    int r = (A >= 0) ? A % B : A % B + B;

    fprintf(output, "%d %d %d %d\n", div_down, div_up, div_to_zero, r);

    fclose(input);
    fclose(output);

    return 0;
}
