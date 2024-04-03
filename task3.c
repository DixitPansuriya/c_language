#include <stdio.h>

int main()
{
    int a, b;

    for (a = 0; a < 5; a++)
    {
        for (b = 0; b < 5; b++)
        {
            if (a <= b)
            {
                printf("%d ", 10 - b);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}
