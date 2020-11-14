/* Write a program that shows “ERROR” to a DNI number entered in the variable
num and a letter in the variable letter according to whether they are
corresponding. (check explanation at the end of the exam) */

#include <cstdio>
#include <cstdlib>

int main() {

	int dni_number;
	char dni_letter;
	int res;

	printf("Enter your DNI number: ");
	scanf_s("%d", &dni_number);
	printf("Enter your DNI letter: ");
	scanf_s(" %c", &dni_letter);
	res = dni_number % 23;
	
	switch (res)
	{
	case 0:
		if (dni_letter == 'T')
		{
			printf("Ok");
		}
		else {
			printf("ERROR");
		}
		break;
	case 1:
		if (dni_letter == 'R')
		{
			printf("Ok");
		}
		else {
			printf("ERROR");
		}
		break;
	case 2:
		if (dni_letter == 'W')
		{
			printf("Ok");
		}
		else {
			printf("ERROR");
		}
		break;
	case 3:
		if (dni_letter == 'A')
		{
			printf("Ok");
		}
		else {
			printf("ERROR");
		}
		break;
	case 4:
		if (dni_letter == 'G')
		{
			printf("Ok");
		}
		else {
			printf("ERROR");
		}
		break;
	case 5:
		if (dni_letter == 'M')
		{
			printf("Ok");
		}
		else {
			printf("ERROR");
		}
		break;
	case 6:
		if (dni_letter == 'Y')
		{
			printf("Ok");
		}
		else {
			printf("ERROR");
		}
		break;
	case 7:
		if (dni_letter == 'F')
		{
			printf("Ok");
		}
		else {
			printf("ERROR");
		}
		break;
	case 8:
		if (dni_letter == 'P')
		{
			printf("Ok");
		}
		else {
			printf("ERROR");
		}
		break;
	case 9:
		if (dni_letter == 'D')
		{
			printf("Ok");
		}
		else {
			printf("ERROR");
		}
		break;
	case 10:
		if (dni_letter == 'X')
		{
			printf("Ok");
		}
		else {
			printf("ERROR");
		}
		break;
	case 11:
		if (dni_letter == 'B')
		{
			printf("Ok");
		}
		else {
			printf("ERROR");
		}
		break;
	case 12:
		if (dni_letter == 'N')
		{
			printf("Ok");
		}
		else {
			printf("ERROR");
		}
		break;
	case 13:
		if (dni_letter == 'J')
		{
			printf("Ok");
		}
		else {
			printf("ERROR");
		}
		break;
	case 14:
		if (dni_letter == 'Z')
		{
			printf("Ok");
		}
		else {
			printf("ERROR");
		}
		break;
	case 15:
		if (dni_letter == 'S')
		{
			printf("Ok");
		}
		else {
			printf("ERROR");
		}
		break;
	case 16:
		if (dni_letter == 'Q')
		{
			printf("Ok");
		}
		else {
			printf("ERROR");
		}
		break;
	case 17:
		if (dni_letter == 'V')
		{
			printf("Ok");
		}
		else {
			printf("ERROR");
		}
		break;
	case 18:
		if (dni_letter == 'H')
		{
			printf("Ok");
		}
		else {
			printf("ERROR");
		}
		break;
	case 19:
		if (dni_letter == 'L')
		{
			printf("Ok");
		}
		else {
			printf("ERROR");
		}
		break;
	case 20:
		if (dni_letter == 'C')
		{
			printf("Ok");
		}
		else {
			printf("ERROR");
		}
		break;
	case 21:
		if (dni_letter == 'K')
		{
			printf("Ok");
		}
		else {
			printf("ERROR");
		}
		break;
	case 22:
		if (dni_letter == 'E')
		{
			printf("Ok");
		}
		else {
			printf("ERROR");
		}
		break;
	}
}