#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <math.h>
#include <locale.h>

int n0(void);
int n1(void);
int n1A(void);
int n2(void);
int dz(void);

int n0(void)
{
    int count;
    char ch1, ch2;

    printf("Введите количество символов: ");
    if (scanf("%d", &count) != 1) return 0;

    printf("Введите два символа через пробел: ");
    if (scanf(" %c %c", &ch1, &ch2) != 2) return 0;

    printf("+");

    for (int i = 1; i <= count; i++)
    {
        if (i <= count / 2)
        {
            putchar(ch1);
        }
        else
        {
            putchar(ch2);
        }
        printf("!");
    }

    printf("+\n");
    return 0;
}

int n1(void)
{
    int m, n;
    long long s = 0;
    int k = 1;

    printf("Введите значение m (начало): ");
    if (scanf("%d", &m) != 1) return 0;

    printf("Введите значение n (конец): ");
    if (scanf("%d", &n) != 1) return 0;

    for (int i = m; i <= n; i++)
    {
        s += i;
        printf("выполнено %d раз\n", k++);
    }

    printf("результат %lld\n", s);
    return 0;
}

int n1A(void)
{
    int m;
    long long z = 1;

    printf("Введите максимальную степень m: ");
    if (scanf("%d", &m) != 1) return 0;

    for (int i = 0; i <= m; i++)
    {
        printf("2^%2d = %12lld\n", i, z);

        if (i < m) {
            z *= 2;
        }
    }

    double res_k = (double)z / 1024.0;
    printf("\nРезультат: %.1fK\n", res_k);
    return 0;
}

int n2(void)
{
    double start = 2.0;
    double end = 4.0;
    double step;

    printf("Программа табулирования функции: y = x^3 + 3*x^2 - 3\n");
    printf("Интервал изменения x: [%.1f; %.1f]\n", start, end);
    printf("Введите шаг табуляции (например, 0.2): ");

    if (scanf("%lf", &step) != 1 || step <= 0)
    {
        printf("Ошибка: неверный шаг.\n");
        return 0;
    }

    printf("\n+----------+----------+\n");
    printf("|    x     |   f(x)   |\n");
    printf("+----------+----------+\n");

    for (double x = start; x <= end + (step / 10.0); x += step)
    {
        double y = pow(x, 3.0) + 3.0 * pow(x, 2.0) - 3.0;
        printf("| %8.4f | %8.4f |\n", x, y);
    }

    printf("+----------+----------+\n");
    return 0;
}


int main()
{
    setlocale(LC_ALL, ".UTF8");

    printf("Задание 0\n");
    n0();

    printf("\nЗадание 1\n");
    n1();

    printf("\nЗадание 1А\n");
    n1A();

    printf("\nЗадание 2 вариант 9\n");
    n2();

   
    return 0;
}