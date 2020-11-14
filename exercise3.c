/*Write a program that asks the user for a number between 1 and 12 (both
included) and displays the month that it is related to, considering
that 1 refers to January and 12 refers to December
If the user enters a number outside the given range, the program
should print “ERROR”*/

#include <cstdio>
#include <cstdlib>

int main() 
{

	int number;

	printf("Enter a number between 1 and 12: ");
	scanf_s("%d", &number);

	if (number == 1)
		printf("%s", "January");
	if (number == 2)
		printf("%s", "February");
	if (number == 3)
		printf("%s", "March");
	if (number == 4)
		printf("%s", "April");
	if (number == 5)
		printf("%s", "May");
	if (number == 6)
		printf("%s", "June");
	if (number == 7)
		printf("%s", "July");
	if (number == 8)
		printf("%s", "August");
	if (number == 9)
		printf("%s", "September");
	if (number == 10)
		printf("%s", "October");
	if (number == 11)
		printf("%s", "November");
	if (number == 12)
		printf("%s", "December");
	else
		printf("%s", "ERROR");
	return(0);
}