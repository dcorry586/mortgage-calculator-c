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

int price, deposit, mortgage_term, interest_rate, deposit_deucted_from_price, annual_fee, interest_fee, actual_annual_fee, monthly_fee;
	
	print_program_description_to_terminal();
	
	printf("Enter price of property: ");
	scanf("%d",&price);

	printf("Enter deposit: ");
	scanf("%d",&deposit);

	printf("Enter mortgage term (years): ");
	scanf("%d",&mortgage_term);

	printf("Enter interest rate: ");
	scanf("%d",&interest_rate);

	deposit_deucted_from_price = price - deposit;

	annual_fee = deposit_deucted_from_price / mortgage_term;

	interest_fee = (interest_rate / 100) * annual_fee;

	actual_annual_fee = annual_fee + interest_fee;

	monthly_fee = actual_annual_fee / 12;

	// print : monthly fee =
	printf("\nmonthly fee = %d\n", monthly_fee) ;

	// time to repay loan = 
printf("\ntime to repay loan (years) = %d\n", mortgage_term) ;


	return 0;
}
