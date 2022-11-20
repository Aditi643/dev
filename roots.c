#include<stdio.h>
#include<math.h>

int main(){
    float x,a,b,c,D;
    printf("Your quadratic equation should be of the form ax^2+bx+c\n");
    printf("Enter the coefficients of a,b,c respectively\n");
    scanf("%f%f%f", &a,&b,&c);
    D=pow(b,2)-4*a*c;
    if (D>=0)
    {
       x= (-b+sqrt(pow(b,2)-4*a*c))/(2*a) ;
    printf(" the root is %f\n", x);
      x= (-b-sqrt(pow(b,2)-4*a*c))/(2*a );
      printf(" the  root is%f\n",x);
    }
    else
    {
        printf("The roots are imaginary.\n");
    }
    
    return 0;
}