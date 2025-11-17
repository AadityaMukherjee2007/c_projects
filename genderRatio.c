/*
WAPC to find the gender ratio based on the number of
males and number of females entered as inputs.
*/

#include <stdio.h>

int main()
{
    int males = 0, females = 0;
    float ratio = 0;

    printf("No. of Males: ");
    scanf("%d", &males);
    printf("No. of Females: ");
    scanf("%d", &females);

    ratio = (float) males / females;
    printf("Gender Ratio: %f\n", ratio);
    
    return 0;
}