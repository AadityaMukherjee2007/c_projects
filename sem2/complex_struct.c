#include <stdio.h>

typedef struct Complex
{
    double real;
    double img;
} Complex;

void display(Complex num);
Complex add(Complex a, Complex b);
Complex sub(Complex a, Complex b);
Complex mul(Complex a, Complex b);

int main()
{
    Complex z1, z2;
    
    printf("Num1\n");
    printf("Real: ");
    scanf("%lf", &z1.real);
    printf("Imaginary: ");
    scanf("%lf", &z1.img);

    printf("Num2\n");
    printf("Real: ");
    scanf("%lf", &z2.real);
    printf("Imaginary: ");
    scanf("%lf", &z2.img);

    printf("Num1: ");
    display(z1);
    printf("Num2: ");
    display(z2);

    printf("Addition: ");
    display(add(z1, z2));
    printf("Subtraction: ");
    display(sub(z1, z2));
    printf("Multiplication: ");
    display(mul(z1, z2));

    return 0;
}

void display(Complex num)
{
    printf("%lf + %lfi\n", num.real, num.img);
}

Complex add(Complex a, Complex b)
{
    Complex result;
    result.real = a.real + b.real;
    result.img = a.img + b.img;
    return result;
}

Complex sub(Complex a, Complex b)
{
    Complex result;
    result.real = a.real - b.real;
    result.img = a.img - b.img;
    return result;
}

Complex mul(Complex a, Complex b)
{
    Complex result;
    result.real = a.real * b.real - (a.img * b.img);
    result.img = a.real * b.img + b.real * a.img;
    return result;
}