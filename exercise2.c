/*Write all the characters from a to z, displaying the odd characters (based
on the ascii value) in upper case and the even characters in lower case.
Separate the characters using one space. Output example: “A b C d E f ...”*/

#include <cstdio>
#include <cstdlib>

int main()
{
	char mayus = 'A';
	char minus = 'a';
	int counter;

	for (counter = 1; counter < 27; counter++) {
		if (counter % 2 == 0) {
			printf("%c ", minus);
		}
		else
			printf("%c ", mayus);
		mayus++;
		minus++;
	}
	return 0;
}