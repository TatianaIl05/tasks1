#include <stdio.h>

int main()
{
    long long answer, v;
    answer = 1000000000;
    answer = answer * 1000000000;
    scanf("%lld", &v);
    
    for (int i = 1; i <= v; i++)
    {
        for (int m = i; m <= v; m++)
        {
            for (int n = m; n <= v; n++)
            {
                if (i*m*n <= v)
                {
                    answer += 1;
                }
            }
        }
    }
    
    answer %= 1000000000;
    answer %= 1000000000;
    
    printf("%lld", answer);
    
    return 0;
}
