#include <stdio.h>

int main()
{

    int num;

    printf("Enter a number\n");

    scanf("%d", &num);

    if (num == 1)
    {

        printf("The number you entered is the 1st number\n");
    }
    else if (num == 2)
    {

        printf("The number you entered is the 2nd number\n");
    }

    else if (num == 3)
    {
        printf("The number you entered is the 3rd number\n");
    }

    else
    {
        printf("The number you entered is not among the first three numbers\n");
    }

    return 0;
}