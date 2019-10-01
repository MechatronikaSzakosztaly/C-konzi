Gyakorlás: Benzinkút program
============================

Feladat
-------

**Input**: benzinár, liter (valós).

**Output**: mennyit fizetünk (kp, 5-ös kerekítés MNB).

Írassuk ki a nyers Ft eredményt is, az látszik a kút kijelzőjén (fillér).

Kezeljük le a hibás inputot: a benzinár 200-1000 Ft-ig literenként, az autónk tankja 60 literes, legkisebb kiadható mennyiség 2 liter.


Megoldás
--------
```c
#include <stdio.h>
#include <stdlib.h>
#include <math.h> // Megjegyzés: gcc-vel fordítva -lm flaget kell használni!

int main()
{
	double benzin_ar, liter;
	double vegosszeg, kerekitve;

	printf("\nBenzin literenkanti ara (Ft/l): ");
	scanf_s("%lf", &benzin_ar);             // UNIX-on scanf
	printf("Vasarolt mennyiseg (l): ");
	scanf_s("%lf", &liter);                 // UNIX-on scanf

	if (benzin_ar < 200 || benzin_ar > 1000)
	{
		printf("Hibas benzin ar.\n");
		return 2;
	}

	if (liter < 2 || liter > 65)
	{
		printf("Hibas benzin mennyiseg.\n");
		return 3;
	}

	else
	{
		vegosszeg = liter * benzin_ar;
		kerekitve = round(vegosszeg / 5) * 5;

		printf("\n******** NYUGTA ********\n");
		printf("EVO 95     (%6.2lf Ft/l)\n ", benzin_ar);
		printf(" .............. %5.2lf l\n\n", liter);
		printf("Vegosszeg: %10.2lf Ft\n", vegosszeg);
		printf("Kerekitve: %10.0lf Ft\n", kerekitve);
		printf("************************\n");
		return 0;
	}
}
```
