#include <stdio.h>

int main()
{
    int num, i, answer;
    scanf("%d", &num);
    for (i = 2; i < num; i ++)
    {
        if (num == 2)
        {
          answer = 0;  
        }
        else if (num % i == 0)
        {
            answer = 1;
            break;
        }
        else
        {
            answer = 0;
        }
    }
    
    if (answer == 0)
    {
        printf("YES");
    }    
    else
    {
        printf("NO");
    }
    
    return 0;
}
