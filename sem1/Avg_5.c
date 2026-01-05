#include <stdio.h>

int main()
{
    int sum;
    float avg;

    printf("Enter elements: \n");
    for (int i = 0; i < 5; i++)
    {
        int n;
        scanf("%d", &n);
        sum += n;
    }

    avg = (float) sum / 5;
    printf("Average: %.2f\n", avg);

    return 0;
}