// proram on K-Means Clustering
#include <stdio.h>
#include <stdlib.h>

void make_partitions(int arr[], int n, int k);

int main()
{
    float num = rand();
    printf("%f", num);
    /*
    int n = 0, k = 0;
    printf("Lenght of Array: ");
    scanf("%d", &n);

    printf("\nEnter elements of the array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d]: ", i);

    }

    printf("Partitions to be made: ");
    scanf("%d", &k);

    if (k > n)
    {
        printf("Number of patitions cannot be more than length of array!\n");
        return 1;
    }
    */

    // test values
    // int test_array[] = {3, 4, 17, 12, 6};
    // int n = 5, k = 2;
    // make_partitions(test_array, n, k);

    return 0;
}

// implementing K-Means Clustering
void make_partitions(int arr[], int n, int k)
{

}