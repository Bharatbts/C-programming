#include<stdio.h>

int main(void)
{
    int numbers[] = {4, 6, 8, 2, 7, 5, 0};

    for (int i = 0; i < 7; i++)
    {
        if (numbers[i] == 0)
        {
            printf("FOUND\n");

            return 0;
        }
    }
    printf("NOT FOUND\n");
    return 1;
}