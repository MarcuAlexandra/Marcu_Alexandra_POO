#include <stdio.h>
#include <string.h>

//#pragma warning (disable: 4996)
/*
Write a program in C-Language that open the file "in.txt", and prints the sum of the numbers that are found on each line of the file in.txt. To open the file use fopen API.
Write your own function that converts a string to a number (similar cu atoi API). To print something to the screen, use the printf API.
*/

unsigned long convert(const char* line) {
	unsigned long nr = 0;
	int digit = 0;
	for (int i = 0; i < strlen(line); i++) {
		digit = (int)(line[i] - '0');
		nr = nr * 10 + digit;
	}
	return nr;
}
int main() {
	FILE* fin;
	fin = fopen("in.txt", "r");
	char line[200];
	unsigned long sum = 0;
	while (!feof(fin)) {
		//read line
		int read = fscanf(fin, "%s", line);
		if (read < 1) {
			continue;
		}

		//conv to nr
		unsigned long nr = convert(line);
		// add to sum
		sum += nr;
	}
	//print sum
	printf("%u", sum);
	return 0;
}