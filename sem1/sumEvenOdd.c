/*
WAPC to display the sum of the first ‘n’ odd numbers and the 
sum of the first ‘n’ even numbers separately. Here, ‘n’ is the user input.
*/

#include <stdio.h>

int main()
{
    int n = 0;
    printf("n: ");
    scanf("%d", &n);

    int odd = 1, even = 2, odd_sum = 0, even_sum = 0;
    for (int i = 0; i < n; i++)
    {
        odd_sum += odd;
        even_sum += even;
        odd += 2;
        even += 2;
    }

    printf("Sum of Even Numbers: %d\n", even_sum);
    printf("Sum of Odd Numbers: %d\n", odd_sum);
}