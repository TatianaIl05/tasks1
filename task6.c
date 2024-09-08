#include <stdio.h>

int main()
{
    int n, i = 1, min = 10001, max = -10001, number, position1, position2;
    scanf("%d", &n);
    
    while (i <= n)
    {
        scanf("%d", &number);
        if (number > max)
        {
            max = number;
            position2 = i;
        }
        if (number < min)
        {
            min = number;
            position1 = i;
        }
        i++;
    }
    
    printf("%d %d %d %d", min, position1, max, position2);
    
    return 0;
}
