#include<stdio.h>
int main()
{
int n;
printf("Enter a value less than 10\n",n);
scanf("%d",&n);
for(int i=n;i<=10;i++)
{
    printf("The value of i is %d\n",i);
}

return 0;
}