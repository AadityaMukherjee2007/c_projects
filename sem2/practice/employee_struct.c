#include <stdio.h>

typedef struct Employee {
    char name[50];
    char code[25];
    float basic_salary;
} Employee;

float compute_pay(float basic_salary);

int main()
{
    int n;
    printf("No. of Employees: ");
    scanf("%d", &n);

    Employee arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Employee %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", arr[i].name);
        printf("Code: ");
        scanf("%s", arr[i].code);
        printf("Basic Salary: ");
        scanf("%f", &arr[i].basic_salary);
    }

    for (int i = 0; i < n; i++)
    {
        printf("\nEmployee %d:\n", i + 1);
        printf("Name: %s\n", arr[i].name);
        printf("Code: %s\n", arr[i].code);
        printf("Basic Salary: %.2f\n", arr[i].basic_salary);
        printf("Computed Pay: %.2f\n", compute_pay(arr[i].basic_salary));
    }
    return 0;
}

float compute_pay(float basic_salary)
{
    if (basic_salary >= 15000)
        return basic_salary + (basic_salary * 0.75) + (basic_salary * 0.15);
    else
        return basic_salary + (basic_salary * 0.5) + (basic_salary * 0.1); 
    
}