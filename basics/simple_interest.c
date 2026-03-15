#include <stdio.h>

int main()
{
    int principal = 1000, rate = 5, years = 1;

    int simpleinterest = (principal * rate * years) / 100;

    printf("The value of simple interest is %d\n", simpleinterest);

    // expected output: the value of simple interest is 50//
    return 0;
}