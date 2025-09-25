/* Условие:
Даны три целых числа: a, b, c.
Требуется определить, выполняется ли условие: a < c < b. Гарантируется, что a < b.
    Входные данные:
Три целых числа a, b, c, разделённые пробелами (в одной строке).
    Выходные данные:
Выведите 1, если c лежит строго между a и b (не включая границы), и 0 — в противном случае.*/

/* Компиляция и запуск: " gcc -std=c11 -Wall -Wextra -Werror -o ../build/interval interval.c && ./../build/interval " */

#include <stdio.h>

int main () {
    int a, b, c;
    char symbol;

    if (scanf("%d %d %d%c", &a, &b, &c, &symbol) != 4 || symbol != '\n') {
        printf("n/a");
    } else {
        printf("%d", (a < c) && (c < b));
        // (a < c) && (c < b) ? printf("1") : printf("0");
    }

    return 0;
}