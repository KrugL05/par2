#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>
#include <Windows.h>
#include <iostream>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251); // Ввод с консоли в кодировке 1251
    SetConsoleOutputCP(1251);
    double x, y;
    double z, f;
    double f12;
    printf("Введите x, y, z >");
    scanf("%lf %lf %lf", &x, &y, &z);
    x = x * pow(10, -2);
    double a = x - y;
    double f1 = pow(M_E, abs(a)) * pow(abs(a), (x + y));
    double f2 = atan(x) + atan(z);
    double f3 = cbrt(pow(x, 6) + pow(log(y), 2));
    f12 = f1 / f2;
    f = f12 + f3;
    printf("f = %lg\n", f);
}