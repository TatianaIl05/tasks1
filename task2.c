#include <stdio.h>

int main()
{
    int x, y, z, s = 0;
    scanf("%d %d %d", &x, &y, &z);
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
    printf("%d\n", s);
    return 0;
}
