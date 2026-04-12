#include<stdio.h>
 
int main (){
// codes which finds all values 
//from the equation which is y=mx+c
    float x,y,m,c;

    printf("Enter the value m(slope):");
    scanf("%f",&m);

    printf("Enter the value of c(constant):");
    scanf ("%f",&c);

    printf("Enter the value of y :");
    scanf("%f",&y);
//the value of x from the linear equation
    x=(y-c)/m;

    printf("the value of x is %f ",x);

    return 0;

    
}