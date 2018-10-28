//Luis Ignacio Acosta Zamora A01411895
/*
 * Write a program that helps the user to compute trigonometric functions.  The program
    * Must ask the user for the desired angle in degrees.
    * Convert the degrees to radians, so it can be used in the trigonometric predefined functions.
    * Must show the different trigonometric functions of such angle: sine, cosine, tangent, secant, cosecant, cotangent.
 */

#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

//Function to transform degrees to radians.
double angleToRadians(double degrees){
    double answer= (degrees*M_PI)/180;
    return answer;
}

//Function to obtain  cosecant.
double csc(double rad){
    double answer= 1/sin(rad);
    return answer;
}

//Function to obtain secant.
double sec(double rad){
    double answer= 1/cos(rad) ;
    return answer;
}

//Function to obtain cotangent.
double cot(double rad){
    double answer= 1/tan(rad);
    return answer;
}

int main() {
    double angleDegrees;

    printf("This program will help you calculate the sine, cosine, tangent, secant, cosecant, and cotangent of and angle in degrees.\n");
    printf("Please enter the desired angle in degrees: \n");
    //Store the degrees given by the user as a variable.
    scanf("%lf", &angleDegrees);

    //Directly obtain all the result by specifying function in functions from the variable of degrees.
    printf("Sine: %lf\n", sin(angleToRadians(angleDegrees)) );
    printf("Cosine: %lf\n", cos(angleToRadians(angleDegrees)));
    printf("Tangent: %lf\n", tan(angleToRadians(angleDegrees)));
    printf("Secant: %lf\n", sec(angleToRadians(angleDegrees)) );
    printf("Cosecant: %lf\n", csc(angleToRadians(angleDegrees)));
    printf("Cotangent: %lf\n", cot(angleToRadians(angleDegrees)));
    return 0;
}