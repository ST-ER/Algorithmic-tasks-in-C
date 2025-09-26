#include <stdio.h>

int main() {
    int number, sum = 0;
    
    printf("Введите число: ");
    scanf("%d", &number);
    
    // Обрабатываем отрицательные числа
    if (number < 0) {
        number = -number;
    }
    
    // Перебираем цифры числа
    while (number > 0) {
        int digit = number % 10;  // Получаем последнюю цифру
        if (digit % 2 != 0) {    // Проверяем на нечётность
            sum += digit;
        }
        number /= 10;            // Убираем последнюю цифру
    }
    
    printf("Сумма нечётных цифр: %d\n", sum);
    
    return 0;
}
