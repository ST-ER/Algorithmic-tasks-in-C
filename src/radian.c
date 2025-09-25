/* Условие:
Дано одно вещественное число — угол в радианах.
Требуется перевести его в градусы и вывести результат, округлённый до ближайшего целого.
    Входные данные:
Одно вещественное число (угол в радианах), записанное в одной строке.
    Выходные данные:
Целое число — угол в градусах, округлённое до ближайшего целого.*/

/* Компиляция и запуск: " gcc -std=c11 -Wall -Wextra -Werror -o ../build/radian radian.c && ./../build/radian " */

#include <stdio.h>
#include <math.h>

int main () {
    double radian;
    char symbol;

    if (scanf("%lf%c", &radian, &symbol) !=2 || symbol != '\n') {
        printf("n/a");
    } else {
        double degree = radian * 57.29;
        degree = round(degree);
        printf("%0.lf",degree);
    }
}