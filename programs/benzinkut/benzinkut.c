#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	double benzin_ar, liter;
	double vegosszeg, kerekitve;

	printf("\nBenzin literenkanti ara (Ft/l): ");
	scanf_s("%lf", &benzin_ar);
	printf("Vasarolt mennyiseg (l): ");
	scanf_s("%lf", &liter);

	if (benzin_ar < 200 || benzin_ar > 1000)
	{
		printf("ERR Hibas benzin ar.\n");
		exit(EXIT_FAILURE);
	}

	if (liter < 2 || liter > 65)
	{
		printf("ERR Hibas benzin mennyiseg.\n");
		exit(EXIT_FAILURE);
	}

	vegosszeg = liter * benzin_ar;
	kerekitve = round(vegosszeg / 5) * 5;

	printf("\n******** NYUGTA ********\n");
	printf("EVO 95     (%.2lf Ft/l)\n ", benzin_ar);
	printf(" .............. %.2lf l\n\n", liter);
	printf("Vegosszeg: %.2lf Ft\n", vegosszeg);
	printf("Kerekitve: %.0lf Ft\n", kerekitve);
	printf("************************\n");

	getchar(); getchar();
	exit(EXIT_SUCCESS);
}