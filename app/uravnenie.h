#ifndef URAVNENIE_H
#define URAVNENIE_H

// структура для возвращения из функции
// содержит количество решений (если 0 значит решений нет, -1 если бесконечное число решений)
// и решения x1, x2
typedef struct _result {
    int solves_number;

    float x1;
    float x2;
} result;

// прототип функции для решения уравнения
// a, b, c - коэфициенты кв. уравнения
result solver(float a, float b, float c);

#endif // URAVNENIE_H
