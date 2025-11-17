#include <stdio.h>

char* classify(float h, float w);

int main()
{
    float height = 0, weight = 0;
    int age = 0;

    printf("Height (m): ");
    scanf("%f", &height);

    printf("Weight (kg): ");
    scanf("%f", &weight);

    printf("Age (yr): ");
    scanf("%d", &age);

    char *class = classify(height, weight);

    if ((class == "Overweight" || class == "Obese") && age > 40)
        printf("\nConsult doctor\n");
    else 
        printf("\nBMI: %s\n", class);

    return 0;
}

char* classify(float h, float w)
{
    float bmi = w / (h * h);

    if (bmi < 18.5)
        return "Underweight";
    else if (bmi >= 18.5 && bmi < 25)
        return "Normal";
    else if (bmi >= 25 && bmi < 30)
        return "Overweight";
    else if (bmi >= 30)
        return "Obese";
}