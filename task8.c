#include <stdio.h>

int main()
{
    int h, m, s, k;
    scanf("%d %d %d %d", &h, &m, &s, &k);
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
    
    printf("%d %d %d", h, m, s);
    
    return 0;
}
