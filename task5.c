#include <stdio.h>
#include <math.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);
  
    int div_down = floor((double)A / B);
    int div_up = ceil((double)A / B);
    int div_to_zero = (A >= 0) ? floor((double)A / B) : ceil((double)A / B);
    int r = (A >= 0) ? A % B : A % B + B;

    printf("%d %d %d %d\n", div_down, div_up, div_to_zero, r);

    return 0;
}
