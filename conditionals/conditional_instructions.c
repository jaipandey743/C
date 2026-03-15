#include<stdio.h>

int main()
{

    int a,b;

    printf("Enter a number\n");

    scanf("%d",&a);

    if(a%2==0){

        printf("The number is %d and it is even\n",a);
    }
    else{

        printf("The number is %d and it is odd\n",a);
    }



    return 0;
}