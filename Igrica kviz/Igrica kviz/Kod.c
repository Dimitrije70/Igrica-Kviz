#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// Дефинисање структуре за питања
typedef struct {
	char pitanje[256];
	char opcije[4][100];
	int tacan_odgovor;
}Pitanje;

void inicijalizacija_pitanja(Pitanje pitanja[]);

int main() {
	Pitanje pitanja[5];
	int rezultat = 0;
	int odgovor;

	inicijalizacija_pitanja(pitanja);

	printf("Dobrodosli u Kviz igru\n\n");

	for (int i = 0; i < 5; i++)
	{
		printf("Pitanje %d: %s\n", i + 1, pitanja[i].pitanje);
		for (int j = 0; j < 4; j++)
		{
			printf("%s\n", pitanja[i].opcije[j]);
		}
		
		printf("Unesite vas odgovor (1-4):");
		scanf("%d", &odgovor);

		if (odgovor == pitanja[i].tacan_odgovor) {
			printf("Vas odgovor je tacan!\n\n");
			rezultat++;
		}
		else
		{
			printf("Vas odgovor nije tacan.\nTacan odgovor je pod %d.\n\n", pitanja[i].tacan_odgovor);
		}

	}

	printf("Osvojili ste %d od 5 poena\n\n", rezultat);

	system("pause");

	return 0;
}

// Функција за попуњавање питања
void inicijalizacija_pitanja(Pitanje pitanja[])
{
	strcpy(pitanja[0].pitanje, "Koji je glavni grad Srbije?");
	strcpy(pitanja[0].opcije[0], "1.Podgorica");
	strcpy(pitanja[0].opcije[1], "2.Skoplje");
	strcpy(pitanja[0].opcije[2], "3.Prizren");
	strcpy(pitanja[0].opcije[3], "4.Beograd");
	pitanja[0].tacan_odgovor = 4;

	strcpy(pitanja[1].pitanje, "Ko od ponuđenih je pisac za decu?");
	strcpy(pitanja[1].opcije[0], "1.Aleksandar Karadjordjevic");
	strcpy(pitanja[1].opcije[1], "2.Vinston Cercil");
	strcpy(pitanja[1].opcije[2], "3.Mitar Mitrovic");
	strcpy(pitanja[1].opcije[3], "4.Tose Proeski");
	pitanja[1].tacan_odgovor = 3;

	strcpy(pitanja[2].pitanje, "Koje godine je poceo Prvi svetski rat?");
	strcpy(pitanja[2].opcije[0], "1.1914");
	strcpy(pitanja[2].opcije[1], "2.1915");
	strcpy(pitanja[2].opcije[2], "3.1913");
	strcpy(pitanja[2].opcije[3], "4.1912");
	pitanja[2].tacan_odgovor = 1;

	strcpy(pitanja[3].pitanje, "Koji od hemijskih elemenata je ugljenik?");
	strcpy(pitanja[3].opcije[0], "1.H");
	strcpy(pitanja[3].opcije[1], "2.C");
	strcpy(pitanja[3].opcije[2], "3.O");
	strcpy(pitanja[3].opcije[3], "4.F");
	pitanja[3].tacan_odgovor = 2;

	strcpy(pitanja[4].pitanje, "Ko je od ponudjenih napisao Anu Karenjinu?");
	strcpy(pitanja[4].opcije[0], "1.Fjodor Dostojevski");
	strcpy(pitanja[4].opcije[1], "2.Mark Tven");
	strcpy(pitanja[4].opcije[2], "3.Lav Nikolajevic Tolstoj");
	strcpy(pitanja[4].opcije[3], "4.Stefan Mitrov Ljubisa");
	pitanja[4].tacan_odgovor = 3;
}
