/*
File: main.c

Author: Dylan Corry

Description: Driver file for the mortgage calculator program

Program purpose: Calculate monthly payments of a fixed term mortgage over given Nth terms at a given interest rate.
Furthermore, figure out how long it will take the user to pay back the loan.

*/

// importing dependencies 
#include <stdio.h>
#include <stdlib.h>

// global variables

//int property_price;

void print_program_description_to_terminal() {

	printf("\n A simple program to calculate monthly payments of a fixed term mortgage over given\n Nth terms at a given interest rate.\nFurthermore, figure out how long it will take the user to pay back the loan.\n\n");
}



// program entry point - main method
int main() {

int price, deposit, mortgage_term, interest_rate;
	
	print_program_description_to_terminal();
	
	printf("Enter price of property: ");
	scanf("%d",&price);

	printf("Enter deposit: ");
	scanf("%d",&deposit);

	printf("Enter mortgage term (years): ");
	scanf("%d",&mortgage_term);

	printf("Enter interest rate: ");
	scanf("%d",&interest_rate);

	int deposit_deducted_from_price = price - deposit;

	int month_pay = (deposit_deducted_from_price / mortgage_term) / 12;

	int total_monthly_bill = month_pay + interest_rate;

	printf("Monthly installments equate to $%d\n", total_monthly_bill);

	return 0;
}
