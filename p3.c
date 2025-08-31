#include <stdio.h>

int main (void)
{

double loan_amount = 0;
int loan_term = 0;
int loan_months = 0;
double monthly_payment = 0;
double left_over_payment = 0;
double interest_rate = 0;
double interest_this_month = 0;
double total_interest = 0;
double final_balance = 0;

printf("Enter Loan Amount: ");
scanf("%lf", &loan_amount);

printf("Enter Annual Percentage Rate of Interest: ");
scanf("%lf", &interest_rate);

printf("Enter Monthly Payment Amount: ");
scanf("%lf", &monthly_payment);

printf("How many years is the term of the loan: ");
scanf("%i", &loan_term);

printf("%lf\n", loan_amount);
printf("%lf\n", interest_rate);
printf("%lf\n", monthly_payment);
printf("%i\n", loan_term);

int final_month = loan_term * 12;
double monthly_interest_rate = (interest_rate/100.0)/12;

//printf("%i\n", final_month);

for (int month = 1; month <= final_month; month++) 
{	
	interest_this_month = monthly_interest_rate * loan_amount;

	total_interest = total_interest + interest_this_month;

	loan_amount = loan_amount - (monthly_payment - interest_this_month);

	left_over_payment = (monthly_payment - interest_this_month);

	printf("Month(%3d), interest = %10.2f, left over payment = %10.2f, balance = %10.2f\n", month, interest_this_month,left_over_payment, total_interest, loan_amount);

}

printf("\nTotal Interest = %10.2f\n", total_interest);
printf("Final Loan Balance = %5.2f\n\n\n", loan_amount);

return 0;

}




	
