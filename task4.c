#include <stdio.h>

int main()
{
    FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");

    int num, i, answer;
    fscanf(input, "%d", &num);

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
        fprintf(output, "YES");
    }    
    else
    {
        fprintf(output, "NO");
    }

    fclose(input);
    fclose(output);
    
    return 0;
}
