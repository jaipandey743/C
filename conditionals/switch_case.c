#include <stdio.h>

int main()
{

    int rating;

    printf("Please rate our software (1-5)\n");
    scanf("%d", &rating);
    switch (rating)
    {

    case 1:
        printf("Your rating is 1,thanks for your feedback\n");
        break;

    case 2:
        printf("Your rating is 2,thanks for your feedback\n");
        break;

    case 3:

        printf("Your rating is 3,thanks for your feedback\n");
        break;

    case 4:
        printf("Your rating is 4,thanks for your feedback\n");

            break;

    case 5:
        printf("Your rating is 5,thanks for your feedback\n");
        break;

    default:
        printf("This rating is not a valid rating, please give a rating from 1-5\n");
        break;
    }

    return 0;
}