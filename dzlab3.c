#include <stdio.h>
#include <locale.h>

#define SEC_IN_MIN 60.0f
#define SEC_IN_HOUR 3600.0f
#define SEC_IN_DAY 86400.0f

int main() {
    setlocale(LC_ALL, ".UTF8");
    int seconds;
    float result;

    puts("Введите временной интервал в секундах:");
    scanf("%d", &seconds);

    result = (float)seconds / SEC_IN_HOUR;
    printf("%d секунд – это %.2f часов\n", seconds, result);

    result = (float)seconds / SEC_IN_MIN;
    printf("%d секунд – это %.2f минут\n", seconds, result);

    result = (float)seconds / SEC_IN_DAY;
    printf("%d секунд – это %.4f суток\n", seconds, result);

    return 0;
}
