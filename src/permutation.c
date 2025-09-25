/* Условие:
Написать програму, осуществляющую крайних цифр в целом трёхзначном числе.
    Входные данные:
Целое трёхзначное число (123).
    Выходные данные:
Целое трёхзначное число (321).*/

/* Компиляция и запуск: " gcc -std=c11 -Wall -Wextra -Werror -o ../build/permutation permutation.c && ./../build/permutation " */

#include <stdio.h>

int main() {
    int num;
    char symbol;

    if (scanf("%d%c", &num, &symbol) != 2 || symbol != '\n') {
        printf("n/a");
    } else {
        int temp, start, mid, end;
        end = num % 10;  
        temp = temp / 10;   // 15(9)
        mid = temp % 10;  // 5
        start = temp / 10;  //  1(5)
        printf("%d%d%d", end, mid, start);
    }
    return 0;
}