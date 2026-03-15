#include<stdio.h>
float average(float a,float b,float c){
    float avg;
    avg=(a+b+c)/3;
    return avg;
}
int main(){
    float a,b,c;
    printf("Enter a number\n");
    scanf("%f",&a);
    printf("Enter a number\n");
    scanf("%f",&b);
    printf("Enter a number\n");
    scanf("%f",&c);
    printf("The average of %f,%f and %f is: %f\n",a,b,c,average(a,b,c));
    
    return 0;
}

