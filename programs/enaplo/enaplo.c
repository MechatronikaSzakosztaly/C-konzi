#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILENAME "12A.dat"
#define DIAKKOD "UER8AS"
#define BUFF_LEN 256

void delete_newline(char* line)
{
	int poz = strcspn(line, "\r\n");
	line[poz] = 0;
}

double atlagszamitas(char* jegyek)
{
	int jegyszam = 0, jegyosszeg = 0;
	char* state;
	char* forras = jegyek;
	while (1)
	{
		char* jegystr = strtok_s(forras, ",", &state);
		forras = NULL;
		if (jegystr == NULL)
			break;
		jegyszam++;
		jegyosszeg += atoi(jegystr);
	}

	if (jegyosszeg == 0)
		return 0;
	else
		return (double)jegyosszeg / jegyszam;
}

double diak_atlag_beolvas(FILE* file, char* diakkod)
{
	char line[BUFF_LEN];
	while (feof(file) == 0)
	{
		memset(line, 0, BUFF_LEN);
		fgets(line, BUFF_LEN, file);
		delete_newline(line);

		if (strncmp(line, diakkod, 6) == 0)
		{
			char* jegyek = line + 6;
			return atlagszamitas(jegyek);
		}
		// ne ide!
	}
	printf("Diak not found.\n");
	return 0;
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
	
	double jegyatlag = diak_atlag_beolvas(file, DIAKKOD);
	printf("A %s kodu tanulo atlaga %.2f\n", DIAKKOD, jegyatlag);

	fclose(file);
	exit(EXIT_SUCCESS);
}
