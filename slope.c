#include<stdio.h>
 
//program which find the slope on the graph

int main(){

//declaration of points
 float y1,y2,x1,x2,s;

 printf("Enter the value of y2:");
 scanf("%f",&y2);

 printf("Enter the value of y1:");
 scanf("%f",&y1);

 printf("Enter the value of x1:");
 scanf("%f",&x1);

 printf("Enter the value of x2:");
 scanf("%f",&x2);

// we define the formula of finding the slope

s=(y2-y1)/(x2-x1);

printf("the value of the slope(s) is %f",s);
return 0;




}