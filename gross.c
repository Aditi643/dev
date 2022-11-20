#include<stdio.h>

int main(){
    float DA,BS,HRA,fund,x;
    printf("Enter your basic salary\n");
    scanf("%f",&BS);
    DA=BS*0.25;
    HRA=BS*0.15;
    fund =(DA+HRA+BS)*0.1;
    printf("Your provident fund of gross salary is %f\n", fund );
    x= BS-(DA+HRA+fund);
    printf("Net salary=%f", x);


    return 0;
}