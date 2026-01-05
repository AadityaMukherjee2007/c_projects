#include <stdio.h>
#include <math.h>

void mean(int* X, int* C, int n);
void var(int* X, int* C, int n);
void skew(int* X, int* C, int n);

int main()
{
    // int n = 0;
    // printf("n: ");
    // scanf("%d", &n);

    // int C[n], X[n];

    // for (int i = 0; i < n; i++)
    // {
    //     printf("C[%d]: ");
    //     scanf("%d", &C[i]);
    //     printf("X[%d]: ");
    //     scanf("%d", &X[i]);
    //     printf("\n");
    // }

    // test
    // int X[] = {4, 7, 5, 9, 6, 8};
    // int C[] = {0, 1, 0, 1, 0, 1};
    // int n = 6;
    int X[] = {1, 2, 3, 4, 10, 12};
    int C[] = {0, 0, 0, 1, 1, 1};
    int n = 6;

    mean(X, C, n);
    var(X, C, n);
    skew(X, C, n);
}


void mean(int* X, int* C, int n)
{
    int sum_0 = 0, sum_1 = 0, n1 = 0, n0 = 0;
    for (int i = 0; i < n; i++)
    {
        if (C[i])
        {
            sum_1 += X[i];
            n1++;
        }
        else 
        {
            sum_0 += X[i];
            n0++;
        }
    }

    printf("Mean of Class 0: %f\nMean of Class 1: %f\n", ((float) sum_0 / n0), ((float) sum_1 / n1));
}


void var(int* X, int* C, int n)
{
    int sum_0 = 0, sum_1 = 0, n1 = 0, n0 = 0;
    for (int i = 0; i < n; i++)
    {
        if (C[i])
        {
            sum_1 += X[i];
            n1++;
        }
        else 
        {
            sum_0 += X[i];
            n0++;
        }
    }

    float mean_1 = (float) sum_1 / n1;
    float mean_0 = (float) sum_0 / n0;

    float var_1 = 0, var_0 = 0;

    for (int i = 0; i < n; i++)
    {
        if (C[i])
            var_1 += pow(X[i] - mean_1, 2);
        else 
            var_0 += pow(X[i] - mean_0, 2);
    }

    var_0 /= n0;
    var_1 /= n1;

    printf("Variance of Class 0: %f\nVariance of Class 1: %f\n", var_0, var_1);
}


void skew(int* X, int* C, int n)
{
    int sum_0 = 0, sum_1 = 0, n1 = 0, n0 = 0;
    for (int i = 0; i < n; i++)
    {
        if (C[i])
        {
            sum_1 += X[i];
            n1++;
        }
        else 
        {
            sum_0 += X[i];
            n0++;
        }
    }

    float mean_1 = (float) sum_1 / n1;
    float mean_0 = (float) sum_0 / n0;

    float var_1 = 0, var_0 = 0;

    for (int i = 0; i < n; i++)
    {
        if (C[i])
            var_1 += pow(X[i] - mean_1, 2);
        else 
            var_0 += pow(X[i] - mean_0, 2);
    }

    var_0 /= n0;
    var_1 /= n1;


    float m3_1 = 0, m3_0 = 0;
    for (int i = 0; i < n; i++)
    {
        if (C[i])
            m3_1 += pow(X[i] - mean_1, 3);
        else 
            m3_0 += pow(X[i] - mean_0, 3);
    }

    float sk_1 = m3_1 / pow(var_1, 3.0 / 2.0);
    float sk_0 = m3_0 / pow(var_0, 3.0 / 2.0);

    printf("Skewness of Class 0: %f\nSkewness of Class 1: %f\n", sk_0, sk_1);
}