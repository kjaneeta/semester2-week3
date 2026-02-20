
#include <stdio.h>

/*
 * Potrfolio submission
 * Name: Kayla Janeeta Rahardjo
 * ID: 201967257
 */

 /* Description:
You are provided with the following data:
• Salary in £ (UK pounds), which is in the range of £14000-£40000
• National Insurance (NI) rate as a %, which is in the range 0%-10%
• Tax rate as a %, which is in the range 10%-30%
You should calculate the take-home salary after deductions according to the following rules:
• National Insurance is deducted from the total salary
• Tax is deducted from the salary remaining after NI deduction, and only applies to the part
of salary remaining over £12500
Your program should print:
• The NI contribution
• The tax contribution
• The take home salary
in an appropriate way.
Eg. It is usual to write an amount of money with 2 decimal places.
In C you can modify the float format %f to print to 2dp with %.2f
As part of your implementation you should decide the appropriate data types for your variables and the appropriate
form of the expressions.
It is important to test your solution. One way to consider this is validate with simple test cases.
• NI=0%, tax=0% should produce no deduction
• NI=0%, tax=100% should result in take home salary £12500 in every case
• NI=10%, tax=0% should simply reduce salary by 10%
To submit your code you should set salary to £36250, NI rate to 8%, tax rate to 15%.
Use only the print statements provided to output data.
Your code should use sensible naming of variables and use appropriate whitespace and inline comments.
*/

 int main( void ) {

    // define and initialise variables for the problem data 
    double salary = 36250;
    double ni_rate = 0.08;
    double tax_rate = 0.15;

    // calculate the deductions and final take-home salary

    double ni_contribution = salary*ni_rate;


    double applicable_tax = (salary - ni_contribution) > 12500 ? (salary - ni_contribution) - 12500 : 0.0;
    double tax_contribution = applicable_tax*tax_rate;

    double take_home = salary - ni_contribution - tax_contribution;

    // Use only these print statement with appropriate formatting and variable names
    printf("Salary £%.2f\n",salary);
    printf("NI contribution £%.2f\n",ni_contribution);
    printf("Tax contribution £%.2f\n",tax_contribution);
    printf("Take home salary £%.2f\n",take_home);

    return 0;
 }