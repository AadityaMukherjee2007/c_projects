#include <stdio.h>

int main()
{
    int largest = 0, secondLargest = 0, n = 0;
    printf("No. of inputs: ");
    scanf("%d", &n);

    printf("Enter number: ");
    scanf("%d", &largest);

    secondLargest = largest;

    for (int i = 0; i < n - 1; i++)
    {
        int num = 0;
        printf("Enter number: ");
        scanf("%d", &num);
        if (largest < num)
        {
            if (i != 0)
            {
                secondLargest = largest;
            }
            largest = num;
        }

        if (i == 0 && num < largest && largest == secondLargest)
            secondLargest = num;

        if (secondLargest < num && num < largest)
        {
            secondLargest = num;
        }

        // printf("%d, %d", secondLargest, largest);
    }

    printf("Largest Number: %d\n", largest);
    printf("Second Largest Number: %d\n", secondLargest);
    return 0;
}