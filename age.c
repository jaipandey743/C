#include<stdio.h>

int main()
{
    int age;

    printf("Enter your age\n");
    scanf("%d",&age);
 
    if(age>=90){
        printf("You cannot drive\n");
    }
    else if(age>=18){
        printf("You can drive\n");
    }
    

}