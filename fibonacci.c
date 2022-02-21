#include <stdio.h>

int main()
{
    short x, y, z;
    short max;
    x = 0;
    y = 1;
    max = 255;
    while (x < max)
    {
        printf("%4d ", x);
        z = x + y;
        x = y;
        y = z;
    }
    printf("\n");
}