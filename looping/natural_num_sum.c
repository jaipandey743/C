#include<stdio.h>
int main()
{
    int sum=0,i;
    for(i=1;i<=10;i++)
    {
       sum=sum+i;
    }
    printf("The sum of first 10 natural numbers is %d",sum);
    return 0;
}