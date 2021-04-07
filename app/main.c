#include <stdio.h>

#include "myfunc.h"
#include "uravnenie.h"

int main()
{
    printf("Hello World!\n");

    result r = solver(1, 2, -3);
    printf("%f %f %d\n", r.x1, r.x2, r.solves_number);

    return myfunc(2);
}
