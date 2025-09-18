#include <stdio.h>
#include <math.h>

float mean(float a[], int len);
float variance(float a[], int len);
float meanDeviation(float a[], int len);

int main()
{
    int n = 0;
    printf("Number of inputs: ");
    scanf("%d", &n);

    float arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("arr[%d]: ", i);
        scanf("%f", &arr[i]);
    }

    printf("Mean: %f\n", mean(arr, n));
    printf("Variance: %f\n", variance(arr, n));
    printf("Mean Deaviation: %f\n", meanDeviation(arr, n));

    return 0;
}

float mean(float a[], int len)
{
    float sum = 0;
    for (int i = 0; i < len; i++)
    {
        sum += a[i];
    }

    return sum / len;
}

float variance(float a[], int len)
{
    float Mean = mean(a, len);
    float dev_square = 0;

    for (int i = 0 ; i < len; i++)
    {
        dev_square += (a[i] - Mean) * (a[i] - Mean);
    }

    return dev_square / len;
}

float meanDeviation(float a[], int len)
{
    float Mean = mean(a, len);
    float dev = 0;

    for(int i = 0; i < len; i++)
    {
        dev += fabs(a[i] - Mean);
    }

    return dev / len;
}