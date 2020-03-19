#include <stdio.h>

int main (int argc, char *argv[]){
// Determining the argc and argv to be an integer and character
	int areas[] = {10, 12, 13, 14, 20};
// Here is declaring the areas of the initializer
	char name[] = "Zed";
// Declaring the character name as Zed
	char full_name[] = {
// Here is declaring each character to build the full name
		'Z', 'e', 'd',
		' ', 'A', '.', ' ',
		'S', 'h', 'a', 'w', '\0'
		};
	printf("The size of an int: %ld\n", sizeof(int));
// Printing the size for int declaration, which contains those numbers of sizeof(int)
	printf("The size of areas (int[]): %ld\n", sizeof(areas));
// The maximum of int declaration sizeof(areas)
	printf("The number of ints in areas: %ld\n", sizeof(areas) / sizeof(int));
// De total of the division sizeof(areas) and sizeof(int)
	printf("The first area is %d, the 2nd is %d.\n", areas[0], areas[1]);
// It gives the result of both areas

	printf("The size of a char: %ld\n", sizeof(char));
// Gives the size of the declared chars, which will be 4
	printf("The size of name (char[]): %ld\n", sizeof(name));
// Gives the size of the name delcaration
	printf("The number of chars: %ld\n", sizeof(name) / sizeof(char));
// Prints the number in the division of sizeof(name) and sizeof(char)
	
	printf("The size of full_name (char[]): %ld\n", sizeof(full_name));
// Prints the size of eache letter of full_name
	printf("The number of chars: %ld\n", sizeof(full_name) / sizeof(char));
// Prints the division of sizeof (full_name) and sizeof(char)
	
	printf("name=\"%s\" and full_name=\"%s\"\n", name, full_name);
// The of final declaration to print name and full_name

	return 0;
}

