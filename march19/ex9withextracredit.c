#include <stdio.h>

int main (int argc, char *argv[]){
	char numbers[4] = {0};
	int name[4] = {'a'};
 	
	printf("number[0]: %d\n", numbers[0]);
	printf("number[1]: %d\n", numbers[1]);
	printf("number[2]: %d\n", numbers[2]);
	printf("number[3]: %d\n", numbers[3]);
	printf("name each: %c %c %c %c\n", name[0], name[1], name[2], name[3]);
	
	printf("name: %s\n", name);
	
	numbers[0] = 1;
	numbers[1] = 2;
	numbers[2] = 3;
	numbers[3] = 4;
	
	name[0] = 'Z';
	name[1] = 'e';
	name[2] = 'd';
	name[3] = '\0';
	
	printf("number[0]: %d\n", numbers[0]);
	printf("number[1]: %d\n", numbers[1]);
	printf("number[2]: %d\n", numbers[2]);
	printf("number[3]: %d\n", numbers[3]);
	
	printf("name each: %c %c %c %c\n", name[0], name[1], name[2], name[3]);
	
	printf("name %s\n", name);
	
	char *name = "Zed";
	
	printf("another: %s\n", name);
	
	printf("another each: %c %c %c %c\n", name[0], name[1], name[2], name[3]);
	
	return 0;
}

// 1. I have warnings about the I should use $ld instead of %d
// 2. The name that was Zed, is now Z
// 3. With printf, we can specify the char that we want to print, ando also
// the number in each string that we want.
// 4. I can condense it in a way that it prints from {1} to {4}
// 5. It will be uploaded later
// 6. No, it doesn't run, it gives an error about name and another because
// the name was declared before
