#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* fptr;
    // char data[100] = "Hello"
    //                  "World";
    // fptr = fopen("test.txt", "a+");

    // if (fptr == NULL)
    //     printf("File not found!");
    // else
    // {
    //     fputs(data, fptr);
    //     fputs("\n", fptr);
    //     fclose(fptr);
    // }    

    char name[50];
    printf("Name of text File: ");
    scanf("%s", &name);

    fileName = name + ".txt"
    fptr = fopen(fileName, "r");
    if (fptr != NULL)
    {
        printf("File exists!\n");
        printf("Append file[a] or Read file[r]? ");
        char opt;
        scanf("%c", &n);

        switch(opt)
        {
            case 'a':
            {
                char data[100];
                printf("Enter file contents: ");
                scanf("%s", &data);

                fptr = fopen("fileName", "a+");
                fputs(data, fptr);

            }
            break;
            case 'r':
            {

            }
            break;

        }
    }
    else
    {
        fptr = fopen(fileName, "w+");
        printf("File created successfully!");   
    }

    fclose(fptr);
    return 0;
}