#include <math.h>
#include <stdio.h>

double f1(double num)
{
    return pow(1.5, num);
}

double f2(double num)
{
    return pow(num, 3);
}

double f3(double num)
{
    double res = log(num);
    res = pow(res, 2);
    return res;
}

double f4(double num)
{
    return num;
}

double f5(double num)
{
    return pow(2, num);
}

double f6(double num)
{
    return (num * log(num));
}

double f7(double num)
{
    return pow(2, log(num));
}

double f8(double num)
{
    return log(num);
}

double f9(double num)
{
    return (num * pow(2, num));
}

double f10(double num)
{
    double res = log(num);
    return log(res);
}

int main()
{
    double x = 3.0 / 2.0;

    for (int i = 1; i < 101; i++)
    {
        printf("%.2f\t", f1(i));
        printf("%.2f\t", f2(i));
        printf("%.2f\t", f3(i));
        printf("%.2f\t", f4(i));
        printf("%.2f\t", f5(i));
        printf("%.2f\t", f6(i));
        printf("%.2f\t", f7(i));
        printf("%.2f\t", f8(i));
        printf("%.2f\t", f9(i));
        printf("%.2f\t", f10(i));
        printf("\n");
    }

    return 0;
}