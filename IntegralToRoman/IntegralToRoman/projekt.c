#include <stdio.h>

char* funkcja(int numer)
{
	if (numer == 4)
	{
		return "IV";
	}
	else if (numer == 9)
	{
		return "IX";
	}
	else
	{
		return "";
	}
}

int main()
{
	int numer;
	numer = 4;
	char* wynik = funkcja(numer);
	char* wyraz = "abc";
	char wyraz2[10] = {0,0,0,0,0,0,0,0,0,0};
	
	int licznik1 = 0;
	int licznik2 = 0;

	for (int i = 0; wynik[i] != 0; i++)
	{
		licznik1++;
	}

	for (int i = 0; wyraz[i] != 0; i++)
	{
		licznik2++;
	}

	for (int i = 0; i < licznik2; i++)
	{
		wyraz2[i + licznik1] = wyraz[i];
	}

	for (int i = 0; i < licznik1; i++)
	{
		wyraz2[i] = wynik[i];
	}

	printf("%s\n", wynik);
	printf("%s\n", wyraz);
	printf("%s\n", wyraz2);

	return 0;
}