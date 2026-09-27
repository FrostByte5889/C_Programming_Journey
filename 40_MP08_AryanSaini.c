#include<stdio.h>

void salary_calc(int, float); //Function to calculate HRA and DA.
void salary_cmp(float a[]);   //Function to compare salary.

int main(){
    float a[5];  //a is array to store basic salary.
    printf("=============================================\n");
    printf("         Employee Salary Calculator          \n");
    printf("=============================================\n\n");
    for (int i=0;i<5;i++){
        printf("Enter the details of Employee %d: ", (i+1));
        printf("\nBasic Salary : ");
        scanf("%f", &a[i]);
        printf("\n");
    
    }

    printf("\n\n");
    printf("=============================================\n");
    printf("                SALARY DETAILS               \n");
    printf("=============================================\n\n");

    for (int i=0;i<5;i++){
        salary_calc(i+1, a[i]);  //Funtion call to calculate salary.
    }

    salary_cmp(a);               //Function to compare salary.

    return 0;
}

void salary_calc(int i, float s) //i is emloyee number and s is his basic salary.
{
    printf("Employee %d\n", i);
    float hra=s*0.2;   //20 percent House Rent Allowance.
    float da=s*0.1;    //10 percent Dearness Allowance.
    printf("Basic Salary               :  %0.2f\n", s);
    printf("House Rent Allowance(HRA)  :  %0.2f\n", hra);
    printf("Dearness Allowance(DA)     :  %0.2f\n", da);
    printf("Gross Salary               :  %0.2f\n", (s+hra+da));
    printf("\n\n------------------------------------------------------------\n\n"); //seperator
}

void salary_cmp(float a[]){
    float highest=a[0];    //Assuming first employee has highest salary.
    int empl=1;

    for (int i=1;i<5;i++){  //Since first employee is already assumed to have highest salary, so starting from 2nd employee.
        if (highest<a[i])      /*Since gross=1.3*basic_salary for all empl 
                                 so highest basic salary will yield highest gross */
        {
            highest=a[i];
            empl=(i+1);
        }    
    }
   
    printf("=======================================\n");
    printf("Highest Gross Salary\n");
    printf("Employee     : %d\n", empl);
    printf("Gross Salary : %0.2f\n", (highest*1.3));  // gross=highest+0.2*highest+0.1*highest=1.3*highest
    printf("=======================================\n"); 
    
}