#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void main()
{
    setlocale(LC_ALL, "");

    char option;
    bool verify = true;

    while (verify)
    {

        printf("Press F/f for women or M/m for men: ");
        scanf("%c", &option);

        switch (option)
        {
        case 'F':
            printf("youre a woman\n");
            verify = false;
            break;
        case 'f':
            printf("youre a woman\n");
            verify = false;
            break;
        case 'M':
            printf("youre a man\n");
            verify = false;
            break;
        case 'm':
            printf("youre a man\n");
            verify = false;
            break;
        default:
            system("clear");
            printf("\npress an available key\n");
        }
    }
}