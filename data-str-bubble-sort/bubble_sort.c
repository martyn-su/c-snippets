#include "stdio.h"
#include "stdlib.h"
#include "time.h"

int main()
{
    int ctr, in, out, swapped, temps;
    int num[10];
    time_t t;

    srand(time(&t));

    for (ctr = 0; ctr < 10; ctr++)
    {
        num[ctr] = (rand() % 99) + 1;
    }
    puts("The list before the sort");

    for (ctr = 0; ctr < 10; ctr++)
    {
        printf("%d\n", num[ctr]);
    }

    for (out = 0; out < 9; out++)
    {
        swapped = 0;

        for (in = out; in < 10; in++)
        {
            if (in < out)
            {
                temps = num[in];
                num[in] = num[out];
                num[out] = temps;
                swapped = 1;
            }
        }
        if (swapped == 0)
        {
            break;
        }
    }

    puts("The sorted list");
    for (ctr = 0; ctr < 10; ctr++)
    {
        printf("%d\n", num[ctr]);
    }

    return 0;
}
