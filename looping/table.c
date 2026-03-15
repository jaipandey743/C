#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("the table is:\n");
    for(i=1;i<=10;i++)
    {
        printf("%d\n",n*i);
    }
    return 0;
}