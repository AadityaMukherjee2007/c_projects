/*
WAPC to input two arrays - yTrue (represents actual values) and 
yPredicted (represents predicted values). Find the mean squared error, 
mean absolute error and root mean squared error between yTrue and 
yPredicted. Use a function for each metric.
*/

#include <stdio.h>
#include <math.h>

float meanSq(int* yTrue, int* yPred, int n);
float absSq(int* yTrue, int* yPred, int n);
float rootSq(int* yTrue, int* yPred, int n);

int main()
{
    int n = 0;
    printf("Lenght of Array: ");
    scanf("%d", &n);

    int yTrue[n], yPred[n];

    for (int i = 0; i < n; i++)
    {
        printf("yTrue[%d]: ", i);
        scanf("%d", &yTrue[i]);
        printf("yPred[%d]: ", i);
        scanf(" %d", &yPred[i]);

        printf("\n");
    }

    printf("Mean Squared Error: %f\n", meanSq(yTrue, yPred, n));
    printf("Mean Absolute Error: %f\n", absSq(yTrue, yPred, n));
    printf("Mean Root Error: %f\n", rootSq(yTrue, yPred, n));

    return 0;
}

float meanSq(int* yTrue, int* yPred, int n)
{
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += pow(yTrue[i] - yPred[i], 2);
    }

    return sum / n;
}

float absSq(int* yTrue, int* yPred, int n)
{
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += fabs(yTrue[i] - yPred[i]);
    }

    return sum / n;
}

float rootSq(int* yTrue, int* yPred, int n)
{
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += pow(yTrue[i] - yPred[i], 2);
    }

    return sqrt(sum / n);
}