#include<stdio.h>
int main(){
   int i;
   printf("Enter the value of i\n");
   scanf("%d",&i);
   do{
    printf("The value of i is %d\n",i);
    i++;
   }while(i<10);

   return 0;


}