#include <stdio.h>

float add(float, float);
float sub(float, float);
float mul(float, float);
float div(float, float);

int main()
{
    float num1 = 0, num2 = 0;
    char op;

    while (1)
    {
        printf("\nNum 1: ");
        scanf("%f", &num1);

        printf("Operator (+, -, /, *, e[exit]): ");
        scanf(" %c", &op);

        printf("Num 2: ");
        scanf("%f", &num2);

        printf("\n");

        switch (op)
        {
            case 'e': return 0;
            break;
            case '+': printf("Ans: %f\n", add(num1, num2));
            break;
            case '-': printf("Ans: %f\n", sub(num1, num2));
            break;
            case '*': printf("Ans: %f\n", mul(num1, num2));
            break;
            case '/': 
                if (num2 == 0) 
                {
                    printf("Error: Division by zero\n");
                    continue;
                }
                printf("Ans: %f\n", div(num1, num2));
            break;
            default: printf("Invalid operator!\n");
        }
    }
}

float add(float a, float b)
{
    return a + b;
}


float sub(float a, float b)
{
    return a - b;
}


float mul(float a, float b)
{
    return a * b;
}


float div(float a, float b)
{
    return a / b;
}