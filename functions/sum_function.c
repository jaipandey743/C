#include<stdio.h>
int sum(int a,int b);
int main(){
    int c;
    c = sum(2,12);
    printf("The sum of a and b is %d",c);
    return 0;
}
int sum( int a,int b){
int result; 
result= a+b;
return result;
}