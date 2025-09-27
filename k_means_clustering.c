// program on K-Means Clustering
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void make_partitions(int arr[], int n, int k); // function to get clusters
void getRandomCentroids(int centroid[], int array[], int lenOfTheArray, int k); // function to get an array of random centroids
int elementIn(int arr[], int len, int element); // function to check whether an element exists in the array or not
int minIndex(int arr[], int n); // function to find the index of the smallest element in the array
void copy(int arr[], int n, int copy[]); // functioon to copy an array to another array of similar length
int isEqual(int a[], int n, int b[]); // function to check whether the two array are equal or not


// driver code
int main()
{
    srand(time(NULL));
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
    // int test_array[] = {7, 10, 5, 2, 9, 1, 8};
    // int n = 7, k = 3;

    // int test_array[] = {
    //     1, 2, 3, 4, 5, 6, 7, 8, 9, 10,          // Cluster 1 (1–10)
    //     20, 21, 22, 23, 24, 25, 26, 27, 28, 29, // Cluster 2 (20–29)
    //     50, 52, 54, 55, 56, 57, 58, 59, 60, 62, // Cluster 3 (50–62)
    //     90, 91, 92, 93, 94, 95, 96, 97, 98, 100,// Cluster 4 (90–100)
    //     150, 152, 154, 156, 158, 160, 162, 165, 168, 170 // Cluster 5 (150–170)
    // };
    // int n = 50, k = 5;

    int test_array[] = {3, 4, 17, 12, 6, 22, 25, 27, 30};
    int n = 9, k = 2;
    make_partitions(test_array, n, k);

    return 0;
}

// implementing K-Means Clustering
void make_partitions(int arr[], int n, int k)
{
    int centroid[k], updatedCentroid[k];
    getRandomCentroids(updatedCentroid, arr, n, k);

    for (int i = 0; i < k; i++)
        centroid[i] = 0;

    int counter = 0;
    while (!isEqual(centroid, k, updatedCentroid))
    {
        int *partitions[k];
        int lengths[k];

        for (int i = 0; i < k; i++)
        {
            if (counter == 0)
                lengths[i] = 1;
            else 
                lengths[i] = 0;

            partitions[i] = malloc(lengths[i] * sizeof(int));
            partitions[i][0] = updatedCentroid[i];
        }

        // for (int i = 0; i < k; i++)
        //     printf("centroid[%d]: %d  ", i, updatedCentroid[i]);
        // printf("\n");

        for (int i = 0; i < n; i++)
        {
            int deviation[k];
            if (elementIn(updatedCentroid, k, i) == 0)
            {
                for (int j = 0; j < k; j++)
                {
                    deviation[j] = (updatedCentroid[j] - arr[i]) * (updatedCentroid[j] - arr[i]);
                }

                // for (int i = 0; i < k; i++)
                //     printf("deviation[%d]: %d  ", i, deviation[i]);
                // printf("  ");

                int index = minIndex(deviation, k);
                lengths[index]++;
                partitions[index] = realloc(partitions[index], lengths[index] * sizeof(int));
                partitions[index][lengths[index] - 1] = arr[i];

                // printf("(%d, %d)", arr[centroid[index]], arr[i]);
                
            }
        }

        // for (int i = 0; i < k; i++)
        // {
        //     printf("%d  ", lengths[i]);
        // }
        // printf("\n");

        copy(updatedCentroid, k, centroid);
        // for (int i = 0; i < k; i++)
        // {
        //     printf("%d  ", centroid[i]);
        // }
        // printf("\n");


        for (int i = 0; i < k; i++)
        {
            // printf("Cluster %d: ", i);
            int sum = 0;
            for (int j = 0; j < lengths[i]; j++)
            {
                sum += partitions[i][j];
                // printf("%d ", partitions[i][j]);
            }

            if (lengths[i] != 0)
                updatedCentroid[i] = sum / lengths[i];
            // printf("\n");
        }

        counter++;

        if (isEqual(centroid, k, updatedCentroid))
        {
            for (int i = 0; i < k; i++)
            {
                printf("Centroid[%d]: %d  -->  ", i, updatedCentroid[i]);
                printf("Cluster %d: ", i);
                for (int j = 0; j < lengths[i]; j++)
                {
                    printf("%d ", partitions[i][j]);
                }
                printf("\n");
            }
        }

        for (int i = 0; i < k; i++) 
            free(partitions[i]);
    }
}

// to get random centroids
void getRandomCentroids(int centroid[], int array[], int lenOfTheArray, int k)
{
    // int centroid[k];
    int c = 0;

    while (c < k)
    {
        int num = ((rand() % 10) * (lenOfTheArray - 1)) / 9;

        if (c == 0)
            centroid[c++] = array[num];
        else
        {
            if (elementIn(centroid, (c + 1), num) == 0)
                centroid[c++] = array[num];
        }
    } 
    
    // for (int i = 0; i < k; i++)
    //     printf("centroid[%d]: %d  ", i, centroid[i]);
    // printf("\n");
}

// function to check whether an element exists in the array or not
int elementIn(int arr[], int len, int element)
{
    for (int i = 0; i < len; i++)
        if (element == arr[i])
            return 1;
    return 0;
}

// function to find the index of the smallest element in the array
int minIndex(int arr[], int n)
{
    int min = arr[0], pos = 0;
    for (int i = 1; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
            pos = i;
        }
    }

    return pos;
}

// function to make a copy of an array
void copy(int arr[], int n, int copy[])
{
    for (int i = 0; i < n; i++)
    {
        copy[i] = arr[i];
    }
}

// function to check whether both the arrays contain the same elements or not
int isEqual(int a[], int n, int b[])
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] - b[i] != 0)
            return 0;
    }

    return 1;
}