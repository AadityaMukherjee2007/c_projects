// WAPC to display prime numbers within a range entered by the user.

#include <stdio.h>

void generate_prime(int n);
int prime(int n);

int main()
{
    int n = 0;
    printf("n: ");
    scanf("%d", &n);

    generate_prime(n);
    
    return 0;
}

void generate_prime(int n)
{
    int c = 0, num = 2;

    printf("Prime Numbers: \n");
    while (c != n)
    {
        while (1)
        {
            if (prime(num))
            {
                printf("%d\n", num);
                num++;
                break;
            }
            num++;
        }
        c++;
    }
}

int prime(int n)
{
    if (n == 2 || n == 3)
        return 1;
    
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}