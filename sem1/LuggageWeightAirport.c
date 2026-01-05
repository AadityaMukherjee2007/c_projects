#include <stdio.h>

int calc(int w, char t);

int main()
{
    int weight;
    char type;
    printf("Enter weight with type of flight.\neg: <weight(in kg)> <Internation(I)/Domestic(D)>\n\n");

    printf("Weight: ");
    scanf("%d %c", &weight, &type);

    if (weight <= 0)
    {
        printf("Weight cannot be less than 1\n");
        return 1;
    }
    else 
    {
        if (type != 'I' && type != 'D')
        {
            printf("Enter proper type of courier\n");
            return 1;
        }
    }

    int amt = calc(weight, type);
    printf("Amount: Rs. %d\n", amt);

    return 0;
}

int calc(int w, char t)
{
    int amt = 0;
    if (t == 'I')
    {
        amt += 1500;
    }

    if (w <= 5)
    {
        amt += w * 800;
    }
    else if (w <= 10)
    {
        amt += 5 * 800;
        w -= 5;
        amt += w * 700;
    }
    else if (w > 10)
    {
        amt += 5 * 800;
        w -= 5;
        amt += 5 * 700;
        w -= 5;
        amt += w * 500;
    }

    return amt;
}