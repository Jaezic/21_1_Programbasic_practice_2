#include <stdio.h>
#include <math.h>

int main(){
    int a,b,c; // a,b,c
    printf("The coefficients of a Quadratic Equation ax^2+bx+c=0 are a, b and c\n");
    printf("Enter vlaues of a, b and c : ");
    scanf("%d %d %d",&a, &b, &c);

    int disc = pow(b,2) - 4*a*c;
    float roots[2];
    if(disc >= 0){
        roots[0] = (-b + sqrt(pow(b,2)-4*a*c))/2*a;
        roots[1] = (-b - sqrt(pow(b,2)-4*a*c))/2*a;
        if(disc == 0)   printf("Two real and equal roots\n");
        printf("Roots are %f and %f\n",roots[0], roots[1]);
    }
    else{
        printf("There is not real roots\n");
    }
    printf("202135577 정민규\n");
    return 0;
}