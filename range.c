#include<stdio.h>
int main(){
    int num;

    printf("enter a number:");
    scanf("%d",&num);

    // range checking
    //expression 1
    if(num>0 && num <10){
        printf("A number is between 0 and 10");
    }
    
    //the statement 2 will be executed 
    //if the expression 1 is not false
    else{
        printf("A number is out of the range");
    }
    return 0;

}
