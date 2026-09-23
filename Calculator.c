#include<stdio.h>
#include<math.h>

float a, b, sum, diff, prod, quot, p;

int main(){
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("5.Power\n");
    printf("\n\n\n");
    printf("enter first operand: ");
    scanf("%f", &a);
    printf("enter second operand: ");
    scanf("%f", &b);

    int c;
    printf("enter the command no. to run: ");
    scanf("%d", &c);

    switch(c)
    {
        case 1:
          sum=a+b;
          printf("The sum is :%f", sum);
          break;
        case 2:
          diff=a-b;
          diff>=0 ? printf("The positive difference is: %f", diff) : printf("The positive difference is: %f", -diff);
          break;
        case 3:
          prod=a*b;
          printf("The product is: %f", prod);
          break;
        case 4:
          if(b!=0){
            quot=a/b;
            printf("The quotient is: %f", quot);
          
          }
          else {
            printf("The denominator is zero so it is not defined");

          }
          break;
        case 5:
          p=pow(a,b);
          printf("The exponent value obtained is: %f", p);
          break;
        default:
          printf("Invalid number chosen!!!!!");
          break;
          }
    return 0;
    }
