#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILENAME "bemenet.txt"
#define BUFF_SIZE 256

int is_pattern_in_line(const char* line, const char* pattern)
{
	if (strlen(pattern) == 0) // pattern is empty
		return 0;

	char* talalat = strstr(line, pattern);
	if (talalat == NULL)
		return 0;
	else
		return 1;
}

void delete_newline(char* string)
{
	int poz = strcspn(string, "\n");
	string[poz] = 0;
}

void print_matching_lines(FILE* file, const char* pattern)
{
	char line[BUFF_SIZE];
	int line_number = 1;
	while (feof(file) == 0)
	{
		memset(line, 0, BUFF_SIZE);
		fgets(line, BUFF_SIZE, file);
		if (is_pattern_in_line(line, pattern) == 1)
		{
			printf("%i: %s", line_number, line);
		}
		line_number++;
	}
}

int main()
{
	FILE* file;
	fopen_s(&file, FILENAME, "r");
	if (file == NULL)
	{
		printf("File not found.");
		exit(EXIT_FAILURE);
	}

	printf("Search pattern: ");
	char* pattern[BUFF_SIZE];
	memset(pattern, 0, BUFF_SIZE);
	gets_s(pattern, BUFF_SIZE);
	delete_newline(pattern);

	printf("\nMatching lines:\n");
	print_matching_lines(file, pattern);

	fclose(file);
	exit(EXIT_SUCCESS);
}