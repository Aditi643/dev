#include<stdio.h>

int main(){
    float height, weight, bmi;
    printf("Enter your weight in kg\n");
    scanf("%f",&weight);
    printf("Enter your height in metres\n");
    scanf("%f", &height);
    bmi= weight/(height*height);
    printf("Your body mass index is:%f\n", bmi);
    if (bmi<=18.5)
    {
        printf("You are underweight");
        
    }
    else if (bmi>18.5 &&bmi<=24.9)
    {
        printf("You belong to normal category");
    }
    else if (bmi>=25 &&bmi<=29.9)
    {
        printf("You are overweight");
     
    }
    else 
    {
        printf("You are diagonised with obesity");
    }
    
    return 0;
}