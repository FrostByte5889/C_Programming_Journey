#include<stdio.h>

int main(){
    float l;
    float b;
    printf("enter length of rectangle: ");
    scanf("%f", &l);
    printf("enter breadth of rectangle: ");
    scanf("%f", &b);
    float a=l*b;
    float p=2*(l+b);
    printf("The area of rectangle is: %f\n", a);
    printf("The perimeter of rectangle is: %f\n", p);
    printf("\n");

    float r;
    printf("Enter radius of circle : ");
    scanf("%f", &r);
    float ac=3.14*r*r;
    float pc=2*3.14*r;
    printf("The area of circle is : %f and its circumference is: %f\n", ac, pc);
printf("\n");



float s;
printf("enter length of side of square: ");
scanf("%f", &s);
float sa=s*s;
float sp=4*s;
printf("The area of square is: %f and its perimeter is: %f\n", sa, sp);


float c;
printf("enter celcius temperature: ");
scanf("%f", &c);
float f=(c*9/5)+32;
printf("The temperature in fahrenheit is : %f\n", f);

float cr;
float ch;
printf("The radius of cylinder is: ");
scanf("%f", &cr);
printf("The height of cylinder is: ");
scanf("%f", &ch);
float acy=2*3.14*cr*ch;
float vcy=3.14*cr*cr*ch;
printf("The area of cylinder is: %f and its volume %f\n", acy, vcy);

      
      return 0;
}