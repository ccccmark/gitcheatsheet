#include <stdio.h>

int main (int argc, char *argv []){
	int bugs = 100;
	// Declaring bugs to 100
	double bug_rate = 1.2;
	// Declaring bug_rate to a float of the double of 1.2
	printf("You have %d bugs at the imaginary rate of %f.\n", bugs, bug_rate);
	// Printing %d to have a the bugs multiplying 100 to 1.2
	long universe_of_defects = 1L * 1024L * 1024L * 1024L;
	// Declaring a long product of 1 * 1024^3
	printf("The entire universe has %ld bugs.\n", universe_of_defects);
	// Printing the product of universe_of_defects
	double expected_bugs = bugs * bug_rate;
	// Here is multilplying the double of the product of bugs * bug_rate
	printf("You are expected to have %f bugs.\n", expected_bugs);
	// Printing the result of the expected_bugs
	double part_of_universe = expected_bugs / universe_of_defects;
	// Here is dividing the expected_bugs by universe_of_defects
	printf("That is only a %e portion of the universe.\n", part_of_universe);
	// Here prints the result of this division, with an e-n expression
	char nul_byte = '\0';
	// Here declares a 0 as nul_byte
	int care_percentage = bugs * nul_byte;
	// Declaring the product of bugs * 0
	printf("Which means you should care %d%%.\n", care_percentage);
	// Printing the result, which in this case is 0
	return 0;
}

