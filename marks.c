/*
WAPC to input marks in three subjects. If the average marks is at least 60 or
the marks in one or more subjects is at least 80, display the message,
"Good result".
*/

#include <stdio.h>

int main()
{
    float marks1, marks2, marks3, maxMarks;
    float average;
   
    printf("Enter marks in three subjects: ");
    scanf("%f %f %f", &marks1, &marks2, &marks3);

    printf("Enter max possible marks: ");
    scanf("%f", &maxMarks);
   
    average = (marks1 / maxMarks * 100 + marks2 / maxMarks * 100 + marks3 / maxMarks * 100) / 3;
    printf("Average: %f\n", average);
   
    if(average >= 60 || marks1 >= 80 || marks2 >= 80 || marks3 >= 80)
    {
        printf("Good result\n");
    }

    return 0;
}
