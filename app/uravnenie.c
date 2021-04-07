#include <math.h> // для sqrt (кв. корень)
#include "uravnenie.h" // прототип и структура result

result solver(float a, float b, float c) {
    result res;

    // сначала мы считаем что у нас нет решений
    res.solves_number = 0;
    res.x1 = 0;
    res.x2 = 0;

    // считаем дискриминант
    float D = b*b - 4*a*c;

    // нет решений
    if(D < 0) {
        return res;
    }

    if (D == 0) {
        // дискриминант = 0 - одно решение
        res.solves_number = 1;
    } else {
        // дискриминант != 0 - два решения
        res.solves_number = 2;
    }

    // если у нас одно решение то x1 будет равен x2
    // (т.к. sqrt(D) = 0)
    res.x1 = (-b - sqrt(D))/(2*a);
    res.x2 = (-b + sqrt(D))/(2*a);

    return res;
}
