#include <stdio.h>
#include <stdbool.h>

unsigned long fac(int n);
void permute(int n);
int len(int n);
int power(int m, int n);
int getnum(int arr[], int l);
bool arrContains(int arr[], int f, int n);
void display(int arr[], int l);

int main()
{
    int num;
    printf("Num: ");
    scanf("%d", &num);

    permute(num);

    return 0;
}


int power(int m, int n)
{
    int res = 1;
    for (int i = 0; i < n; i++)
    {
        res *= m;
    }

    return res;
}


int len(int n)
{
    int c = 0;
    while (n != 0)
    {
        c++;
        n /= 10;
    }

    return c;
}


void permute(int n)
{
    int l = len(n);
    unsigned long f = fac(n);
    int pArr[f], num[l];
    int copy = n, x = 0;

    printf("%d %lu", l, f);

    while (copy != 0)
    {
        int c = copy;
        int rem = c / power(10, len(n) - (x + 1));
        num[x] = rem;
        copy = copy % power(10, len(n) - (x + 1));
        x++;
    }

    x = 0;
    int number = getnum(num, l);
    
    if (arrContains(pArr, f, number) == 0)
    {
        pArr[x] = number;
        x++;
    }

    while (x < f)
    {
        for (int j = 0; j < l - 1; j++)
        {
            printf("%d\n", number);
            num[j] = num[j] + num[j + 1];
            num[j + 1] = num[j] - num[j + 1];
            num[j] = num[j] - num[j + 1];

            number = getnum(num, l);
            if (arrContains(pArr, f, number) == 0)
            {
                pArr[x] = number;
                //printf("%d", pArr[0]);
                x++;
            }
        }
    }

    //display(pArr, f);
}


void display(int arr[], int l)
{
    printf("\n");

    for (int i = 0; i < l; i++)
    {
        printf("%d\n", arr[i]);
    }
}


bool arrContains(int arr[], int l, int n)
{
    for (int k = 0; k < l; k++)
    {
        if (arr[k] == n)
        {
            return true;
        }
    }
    return false;
}


int getnum(int arr[], int l)
{
    int num = 0;
    for (int i = 0; i < l; i++)
    {
        num = num * 10 + arr[i];
    }
    return num;
}

unsigned long fac(int n)
{
    unsigned long factorial = 1;
    for (int i = 2; i <= n; i++)
    {
        factorial *= i;
    }
    return factorial;
}