// input 3 numbers and find the minimum of them

#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

int min = 0;

void signal_handler();

int main()
{
    signal(SIGINT, signal_handler);

    printf("n: ");
    scanf("%d", &min);

    while(1)
    {
        int n = 0;
        printf("n: ");
        scanf("%d", &n);

        if (min > n)
            min = n;
    }

    return 0;
}

void signal_handler()
{
    printf("\nMinimum: %d\n", min);
    exit(0);
}