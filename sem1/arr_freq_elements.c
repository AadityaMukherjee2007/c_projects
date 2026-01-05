/*
WAPC to input an integer array from the user.
Display the frequency of every element in the array.
*/

#include <stdio.h>

void freq_of_elements(int arr[], int n);

int main()
{
    int n = 0;
    printf("Length of Array: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    freq_of_elements(arr, n);
    return 0;
}

void freq_of_elements(int arr[], int n)
{
    printf("\nFrequency: \n");

    for (int i = 0; i < n; i++)
    { 
        int flag = 0;
        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                flag = 1;
                break;
            }
        }

        if (flag == 1)
            continue; 

        int c = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] == arr[i])
                c++;
        }

        printf("%d : %d\n", arr[i], c);
    }
}
