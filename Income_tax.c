#include<stdio.h>

int main(){
    float i, a, b, c;  //declaration of variable.
    
    
    
    printf("enter your income(in lakhs): ");
    scanf("%f", &i);
    
    a=(i*0.05);
    b=(i*0.2);
    c=(i*0.3);
    
    

    if (i<2.5){
        printf("The payable tax amount is: 0.00");
    }

    else if (i>=2.5 && i<5.0){
        
        printf("The payable amount is: %0.2f lacs", a);
    }

    else if (i>=5.0 && i<10.0){
        printf("The payable amount is: %0.2f lacs", b);
    }

    else if (i>=10.0){
        printf("The payable amount is: %0.2f lacs", c);
    }

    else {
        printf("Sorry for the inconvenience but some error occured!!");
    }


    return 0;


}