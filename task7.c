#include <stdio.h>
#include <math.h>

int main()
{
    int n, m, p, k, l;
    scanf("%d", &n);
    scanf("%d %d %d %d", &m, &p, &k, &l);
    
    double num_of_flats = floor(m/(l*(p-1) + (k-1)));
    int entran = (int)(floor(ceil(n/num_of_flats)/l) + 1);
    int level = (int)ceil(n/num_of_flats) % l;
    
    printf("%d %d", entran, level);
    
    return 0;
}
