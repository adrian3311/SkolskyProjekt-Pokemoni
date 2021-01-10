// Adrian Liba 2.AI PRO - uloha(pokemoni)
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

//vyherna ruleta
int mince = 0;
void odmena() {
	int vyhra;
	srand(time(0));
	int pole[3][3] = {
		{ 1,2,3 },
		{ 4,5,6 },
		{ 7,8,9 }
	};
	cout << endl;
	for (int a = 0; a < 3; a++) {
		for (int b = 0; b < 3; b++)
			cout << " " << pole[a][b];
		cout << endl;
	}
	cout << endl;
	int rando1 = (rand() % 3);
	cin >> vyhra;
	switch (vyhra) {
	case 1:
		mince = mince + rando1;
		if (rando1 == 1) {
			cout << endl << "Vyhral si 1 mincu" << endl;
		}
		else if (rando1 == 0) {
			cout << endl << "Vyhral si 0 minci" << endl;
		}
		else if (rando1 == 2) {
			cout << endl << "Vyhral si 2 mince" << endl;
		}
		break;
	case 2:
		mince = mince + rando1;
		if (rando1 == 1) {
			cout << endl << "Vyhral si 1 mincu" << endl;
		}
		else if (rando1 == 0) {
			cout << endl << "Vyhral si 0 minci" << endl;
		}
		else if (rando1 == 2) {
			cout << endl << "Vyhral si 2 mince" << endl;
		}
		break;
	case 3:
		mince = mince + rando1;
		if (rando1 == 1) {
			cout << endl << "Vyhral si 1 mincu" << endl;
		}
		else if (rando1 == 0) {
			cout << endl << "Vyhral si 0 minci" << endl;
		}
		else if (rando1 == 2) {
			cout << endl << "Vyhral si 2 mince" << endl;
		}
		break;
	case 4:
		mince = mince + rando1;
		if (rando1 == 1) {
			cout << endl << "Vyhral si 1 mincu" << endl;
		}
		else if (rando1 == 0) {
			cout << endl << "Vyhral si 0 minci" << endl;
		}
		else if (rando1 == 2) {
			cout << endl << "Vyhral si 2 mince" << endl;
		}
		break;
	case 5:
		mince = mince + rando1;
		if (rando1 == 1) {
			cout << endl << "Vyhral si 1 mincu" << endl;
		}
		else if (rando1 == 0) {
			cout << endl << "Vyhral si 0 minci" << endl;
		}
		else if (rando1 == 2) {
			cout << endl << "Vyhral si 2 mince" << endl;
		}
		break;
	case 6:
		mince = mince + rando1;
		if (rando1 == 1) {
			cout << endl << "Vyhral si 1 mincu" << endl;
		}
		else if (rando1 == 0) {
			cout << endl << "Vyhral si 0 minci" << endl;
		}
		else if (rando1 == 2) {
			cout << endl << "Vyhral si 2 mince" << endl;
		}
		break;
	case 7:
		mince = mince + rando1;
		if (rando1 == 1) {
			cout << endl << "Vyhral si 1 mincu" << endl;
		}
		else if (rando1 == 0) {
			cout << endl << "Vyhral si 0 minci" << endl;
		}
		else if (rando1 == 2) {
			cout << endl << "Vyhral si 2 mince" << endl;
		}
		break;
	case 8:
		mince = mince + rando1;
		if (rando1 == 1) {
			cout << endl << "Vyhral si 1 mincu" << endl;
		}
		else if (rando1 == 0) {
			cout << endl << "Vyhral si 0 minci" << endl;
		}
		else if (rando1 == 2) {
			cout << endl << "Vyhral si 2 mince" << endl;
		}
		break;
	case 9:
		mince = mince + rando1;
		if (rando1 == 1) {
			cout << endl << "Vyhral si 1 mincu" << endl;
		}
		else if (rando1 == 0) {
			cout << endl << "Vyhral si 0 minci" << endl;
		}
		else if (rando1 == 2) {
			cout << endl << "Vyhral si 2 mince" << endl;
		}
		break;
	}
}

int main() {
//uplny zaciatok
	int volba = 1;
	cout << "Chces ist hrat sam alebo s niekym?" << endl;
	cout << "Ak s niekym stlac 1" << endl;
	cout << "Ak sam stlac 2" << endl;
	cout << "Pre ukoncenie stlac hocico ine" << endl;
	cin >> volba;
	if (volba == 1) {
//zaciatok hry s niekym
			int Hrac1;
			int Hrac2;
			bool start;
			cout << "HRA POKEMONI PRE DVOCH" << endl;
			cout << "Stlac 1 aby si spustil hru inak budes vyhodeny:" << endl;
			cin >> start;
			if (start < 1 || start > 1) {
				return 0;
			}
			if (start == false) {
				return 0;
			}
//hlavne menu
			if (start == true) {
				while (true) {
					int jaHP = 100;
					int pcHP = 100;
					cout << "\n\n";
					cout << "\n            | 100HP |                                      | 100HP |             ";
					cout << "\n                                                                                 ";
					cout << "\n            ,       ,                                      ?_______?             ";
					cout << "\n           /|      /)                                    __|       |__           ";
					cout << "\n          / |  ,  / |                                   |             |     ,    ";
					cout << "\n         /  |____/  |                                   |   (.)  (.)  |    /|    ";
					cout << "\n        (           :          ,                        |_           _|   / |_   ";
					cout << "\n        | (.)   (.) |         /|                          |   ,.,   |    |_ _|   ";
					cout << "\n        |     ,     |      __/ /                          |__     __|     | |    ";
					cout << "\n        |O  ,__,   O|     / __/                          /   |   |   )  ,,| |    ";
					cout << "\n        (           |  __/ /                            |    |___|   | / /| |    ";
					cout << "\n        |-    .    -| / __/                             |      .     |/ / | |    ";
					cout << "\n        |  //    // |/ /                                (   // .     | /  | |    ";
					cout << "\n        | //    //  | /                                 |  //  .     |/   |_/    ";
					cout << "\n        |'''   '''  |/                                  | '''  .     |           ";
					cout << "\n        |_____/|____|                                   |____________/           ";
					cout << "\n         /;/     /;/	                                   /;/    /;/               ";
					cout << "\n        /_/     /_/	                                  /_/    /_/                ";
					cout << endl << endl << "        Pikachu (1)                                        Cubone (2)				 Ukoncit (3)\n";
					cout << "\nKazdy pokemon ma zakladne zivoty 100HP";
					cout << "\nVyber si pokemona podla cisla";
					cout << "\nVybera Hrac1:";
//hra(boj)
					int pkmn;
					cin >> pkmn;
					switch (pkmn) {
//pokemon(1)
					case 1:
						while (true) {
							cout << "\n             |" << jaHP << "HP|                                        |" << pcHP << "HP|       ";
							cout << "\n                                                                                 ";
							cout << "\n            ,       ,                                      ?_______?             ";
							cout << "\n           /|      /)                                    __|       |__           ";
							cout << "\n          / |  ,  / |                                   |             |     ,    ";
							cout << "\n         /  |____/  |                                   |   (.)  (.)  |    /|    ";
							cout << "\n        (           :          ,                        |_           _|   / |_   ";
							cout << "\n        | (.)   (.) |         /|                          |   ,.,   |    |_ _|   ";
							cout << "\n        |     ,     |      __/ /                          |__     __|     | |    ";
							cout << "\n        |O  ,__,   O|     / __/                          /   |   |   )  ,,| |    ";
							cout << "\n        (           |  __/ /                            |    |___|   | / /| |    ";
							cout << "\n        |-    .    -| / __/                             |      .     |/ / | |    ";
							cout << "\n        |  //    // |/ /                                (   // .     | /  | |    ";
							cout << "\n        | //    //  | /                                 |  //  .     |/   |_/    ";
							cout << "\n        |'''   '''  |/                                  | '''  .     |           ";
							cout << "\n        |_____/|____|                                   |____________/           ";
							cout << "\n         /;/     /;/	                                   /;/    /;/               ";
							cout << "\n        /_/     /_/	                                  /_/    /_/                ";
							cout << "\n\n	   Hrac1                                              Hrac2				";
							cout << endl << endl << endl;
							srand(time(0));
							cout << "Ako prvy zacina Hrac1" << endl;
							cout << "Pomocou cisla si vyberes utok:                Pomocou cisla si vyberes utok:" << endl;
							cout << "(1) bleskovy utok                             (1) zemny utok" << endl;
							cout << "(2) hromovy sok                               (2) utok so zbranou" << endl;
							cout << "(3) vyliecit sa                               (3) vyliecit sa" << endl;
							cout << "Vyber si utok:                                Vyber si utok:" << endl;
//utoky (Hrac1)
							int jautok = (rand() % 21);
							int ja1;
							cin >> ja1;
							switch (ja1) {
							case 1:
								if (jautok == 20 || jautok == 10) {
									pcHP = pcHP - 10 - jautok;
									cout << endl << "Dal si kriticky zasah" << endl;
									cout << "Ubral si: " << jautok + 10 << "HP" << endl;
								}
								else {
									pcHP = pcHP - jautok;
									cout << endl << "Ubral si: " << jautok << "HP" << endl;
								}
								break;
							case 2:
								if (jautok == 20 || jautok == 10) {
									pcHP = pcHP - 10 - jautok;
									cout << endl << "Dal si kriticky zasah" << endl;
									cout << "Ubral si: " << jautok + 10 << "HP" << endl;
								}
								else {
									pcHP = pcHP - jautok;
									cout << endl << "Ubral si: " << jautok << "HP" << endl;
								}
								break;
							case 3:
								if (jautok == 20 || jautok == 10) {
									jaHP = jaHP + 10 + jautok;
									cout << endl << "Dal si kriticke liecenie" << endl;
									cout << "Vyliecil si sa o: " << jautok + 10 << "HP" << endl;
								}
								else {
									jaHP = jaHP + jautok;
									cout << endl << "Vyliecil si sa o: " << jautok << "HP" << endl;
								}
							}
//utoky (Hrac2)
							cout << "Teraz je na rade Hrac2";
							int pcutok = (rand() % 21);
							int ja2;
							cin >> ja2;
							switch (ja2) {
							case 1:
								if (pcutok == 20 || pcutok == 10) {
									jaHP = jaHP - 10 - pcutok;
									cout << "Dal si kriticky zasah" << endl;
									cout << "Ubral si: " << pcutok + 10 << "HP" << endl;
								}
								else {
									jaHP = jaHP - pcutok;
									cout << "Ubral si: " << pcutok << "HP" << endl;
								}
								break;
							case 2:
								if (pcutok == 20 || pcutok == 10) {
									jaHP = jaHP - 10 - pcutok;
									cout << "Dal si kriticky zasah" << endl;
									cout << "Ubral si: " << pcutok + 10 << "HP" << endl;
								}
								else {
									jaHP = jaHP - pcutok;
									cout << "Ubral si: " << pcutok << "HP" << endl;
								}
								break;
							case 3:
								if (pcutok == 20 || pcutok == 10) {
									pcHP = pcHP + 10 + pcutok;
									cout << "Dal si kriticke liecenie" << endl;
									cout << "Vyliecil si sa o: " << pcutok + 10 << "HP" << endl;
								}
								else {
									pcHP = pcHP + pcutok;
									cout << "Vyliecil si sa o: " << pcutok << "HP" << endl;
								}
							}
							if (jaHP > 100) {
								jaHP = 100;
							}
							if (pcHP > 100) {
								pcHP = 100;
							}
							system("PAUSE");
//vyhra
							if (pcHP < 1) {
								cout << "\n             |" << jaHP << "HP|                                        |" << pcHP << "HP|       ";
								cout << "\n                                                                                 ";
								cout << "\n            ,       ,                                      ?_______?             ";
								cout << "\n           /|      /)                                    __|       |__           ";
								cout << "\n          / |  ,  / |                                   |             |     ,    ";
								cout << "\n         /  |____/  |                                   |   (.)  (.)  |    /|    ";
								cout << "\n        (           :          ,                        |_           _|   / |_   ";
								cout << "\n        | (.)   (.) |         /|                          |   ,.,   |    |_ _|   ";
								cout << "\n        |     ,     |      __/ /                          |__     __|     | |    ";
								cout << "\n        |O  ,__,   O|     / __/                          /   |   |   )  ,,| |    ";
								cout << "\n        (           |  __/ /                            |    |___|   | / /| |    ";
								cout << "\n        |-    .    -| / __/                             |      .     |/ / | |    ";
								cout << "\n        |  //    // |/ /                                (   // .     | /  | |    ";
								cout << "\n        | //    //  | /                                 |  //  .     |/   |_/    ";
								cout << "\n        |'''   '''  |/                                  | '''  .     |           ";
								cout << "\n        |_____/|____|                                   |____________/           ";
								cout << "\n         /;/     /;/	                                   /;/     /;/              ";
								cout << "\n        /_/     /_/	                                  /_/     /_/               ";
								cout << "\n\n           Hrac1                                           Hrac2	          ";
								cout << endl << endl << endl;
								cout << "Hrac2 bol porazeny.Gratulujem vyhral si!!" << endl;
								system("PAUSE");
								break;
							}
//vyhra2
							if (jaHP < 1) {
								cout << "\n             |" << jaHP << "HP|                                        |" << pcHP << "HP|       ";
								cout << "\n                                                                                 ";
								cout << "\n            ,       ,                                      ?_______?             ";
								cout << "\n           /|      /)                                    __|       |__           ";
								cout << "\n          / |  ,  / |                                   |             |     ,    ";
								cout << "\n         /  |____/  |                                   |   (.)  (.)  |    /|    ";
								cout << "\n        (           :          ,                        |_           _|   / |_   ";
								cout << "\n        | (.)   (.) |         /|                          |   ,.,   |    |_ _|   ";
								cout << "\n        |     ,     |      __/ /                          |__     __|     | |    ";
								cout << "\n        |O  ,__,   O|     / __/                          /   |   |   )  ,,| |    ";
								cout << "\n        (           |  __/ /                            |    |___|   | / /| |    ";
								cout << "\n        |-    .    -| / __/                             |      .     |/ / | |    ";
								cout << "\n        |  //    // |/ /                                (   // .     | /  | |    ";
								cout << "\n        | //    //  | /                                 |  //  .     |/   |_/    ";
								cout << "\n        |'''   '''  |/                                  | '''  .     |           ";
								cout << "\n        |_____/|____|                                   |____________/           ";
								cout << "\n         /;/     /;/	                                   /;/     /;/              ";
								cout << "\n        /_/     /_/	                                  /_/     /_/               ";
								cout << "\n\n           Hrac1                                           Hrac2	             ";
								cout << endl << endl << endl;
								cout << "Hrac1 bol porazeny.Gratulujem vyhral si!!" << endl;
								system("PAUSE");
								break;
							}
						}
						break;
//pokemon (2)
					case 2:
						while (true) {
							cout << "\n           |" << jaHP << "HP|                                             |" << pcHP << "HP|                       ";
							cout << "\n          ?_______?			                      ,       ,                              ";
							cout << "\n        __|       |__                                        /|      /)                   ";
							cout << "\n       |             |     ,                                / |  ,  / |                   ";
							cout << "\n       |   (.)  (.)  |    /|                               /  |____/  |                   ";
							cout << "\n       |_           _|   / |_                             (           :          ,        ";
							cout << "\n         |   ,.,   |    |_ _|                             | (.)   (.) |         /|        ";
							cout << "\n         |__     __|     | |                              |     ,     |      __/ /        ";
							cout << "\n        /   |   |   )  ,,| |                              |O  ,__,   O|     / __/         ";
							cout << "\n        |   |___|   | / /| |                              (           |  __/ /            ";
							cout << "\n        |      .    |/ / | |                              |-    .    -| / __/             ";
							cout << "\n        (   // .    | /  | |                              |  //    // |/ /                ";
							cout << "\n        |  //  .    |/   |_/                              | //    //  | /                 ";
							cout << "\n        | '''  .    |                                     |'''   '''  |/                  ";
							cout << "\n        |___________/                                     |_____/|____|                   ";
							cout << "\n         /;/    /;/                                        /;/     /;/                    ";
							cout << "\n        /_/    /_/                                        /_/     /_/                     ";
							cout << "\n\n           Hrac1                                             Hrac2                         ";
							cout << endl << endl << endl;
							srand(time(0));
							cout << "Ako prvy zacina Hrac1" << endl;
							cout << "Pomocou cisla si vyberes utok:                               Pomocou cisla si vyberes utok:" << endl;
							cout << "(1) zemny utok                                               (1) bleskovy utok" << endl;
							cout << "(2) utok so zbranou                                          (2) hromovy sok " << endl;
							cout << "(3) vyliecit sa                                              (3) vyliecit sa " << endl;
							cout << "Vyber si utok:                                               Vyber si utok:" << endl;



// utoky (ja1)
							int jautok = (rand() % 21);
							int ja;
							cin >> ja;
							switch (ja) {
							case 1:
								if (jautok == 20 || jautok == 10) {
									pcHP = pcHP - 10 - jautok;
									cout << endl << "Dal si kriticky zasah" << endl;
									cout << "Ubral si: " << jautok + 10 << "HP" << endl;
								}
								else {
									pcHP = pcHP - jautok;
									cout << endl << "Ubral si: " << jautok << "HP" << endl;
								}
								break;
							case 2:
								if (jautok == 20 || jautok == 10) {
									pcHP = pcHP - 10 - jautok;
									cout << endl << "Dal si kriticky zasah" << endl;
									cout << "Ubral si: " << jautok + 10 << "HP" << endl;
								}
								else {
									pcHP = pcHP - jautok;
									cout << endl << "Ubral si: " << jautok << "HP" << endl;
								}
								break;
							case 3:
								if (jautok == 20 || jautok == 10) {
									jaHP = jaHP + 10 + jautok;
									cout << endl << "Dal si kriticke liecenie" << endl;
									cout << "Vyliecil si sa o: " << jautok + 10 << "HP" << endl;
								}
								else {
									jaHP = jaHP + jautok;
									cout << endl << "Vyliecil si sa o: " << jautok << "HP" << endl;
								}
							}
//utoky (ja2)
							cout << "Teraz je na rade Hrac2" << endl;
							int pcutok = (rand() % 21);
							int ja2;
							cin >> ja2;
							switch (ja2) {
							case 1:
								if (pcutok == 20 || pcutok == 10) {
									jaHP = jaHP - 10 - pcutok;
									cout << "Dal si kriticky zasah" << endl;
									cout << "Ubral si: " << pcutok + 10 << "HP" << endl;
								}
								else {
									jaHP = jaHP - pcutok;
									cout << "Ubral si: " << pcutok << "HP" << endl;
								}
								break;
							case 2:
								if (pcutok == 20 || pcutok == 10) {
									jaHP = jaHP - 10 - pcutok;
									cout << "Dal si kriticky zasah" << endl;
									cout << "Ubral si: " << pcutok + 10 << "HP" << endl;
								}
								else {
									jaHP = jaHP - pcutok;
									cout << "Ubral si: " << pcutok << "HP" << endl;
								}
								break;
							case 3:
								if (pcutok == 20 || pcutok == 10) {
									pcHP = pcHP + 10 + pcutok;
									cout << "Dal si kriticke liecenie" << endl;
									cout << "Vyliecil si sa o: " << pcutok + 10 << "HP" << endl;
								}
								else {
									pcHP = pcHP + pcutok;
									cout << "Vyliecil si sa o: " << pcutok << "HP" << endl;
								}
							}
							if (jaHP > 100) {
								jaHP = 100;
							}
							if (pcHP > 100) {
								pcHP = 100;
							}
							system("PAUSE");
//vyhra
							if (pcHP < 1) {
								cout << "\n           |" << jaHP << "HP|                                             |" << pcHP << "HP|                       ";
								cout << "\n          ?_______?			                      ,       ,                              ";
								cout << "\n        __|       |__                                        /|      /)                   ";
								cout << "\n       |             |     ,                                / |  ,  / |                   ";
								cout << "\n       |   (.)  (.)  |    /|                               /  |____/  |                   ";
								cout << "\n       |_           _|   / |_                             (           :          ,        ";
								cout << "\n         |   ,.,   |    |_ _|                             | (.)   (.) |         /|        ";
								cout << "\n         |__     __|     | |                              |     ,     |      __/ /        ";
								cout << "\n        /   |   |   )  ,,| |                              |O  ,__,   O|     / __/         ";
								cout << "\n        |   |___|   | / /| |                              (           |  __/ /            ";
								cout << "\n        |      .    |/ / | |                              |-    .    -| / __/             ";
								cout << "\n        (   // .    | /  | |                              |  //    // |/ /                ";
								cout << "\n        |  //  .    |/   |_/                              | //    //  | /                 ";
								cout << "\n        | '''  .    |                                     |'''   '''  |/                  ";
								cout << "\n        |___________/                                     |_____/|____|                   ";
								cout << "\n         /;/    /;/                                        /;/     /;/                    ";
								cout << "\n        /_/    /_/                                        /_/     /_/                     ";
								cout << "\n\n           Hrac1                                              Hrac2	             ";
								cout << endl << endl << endl;
								cout << "Hrac2 bol porazeny.Gratulujem vyhral si!!" << endl;
								system("PAUSE");
								break;
							}
//vyhra2
							if (jaHP < 1) {
								cout << "\n           |" << jaHP << "HP|                                             |" << pcHP << "HP|                       ";
								cout << "\n          ?_______?			                      ,       ,                              ";
								cout << "\n        __|       |__                                        /|      /)                   ";
								cout << "\n       |             |     ,                                / |  ,  / |                   ";
								cout << "\n       |   (.)  (.)  |    /|                               /  |____/  |                   ";
								cout << "\n       |_           _|   / |_                             (           :          ,        ";
								cout << "\n         |   ,.,   |    |_ _|                             | (.)   (.) |         /|        ";
								cout << "\n         |__     __|     | |                              |     ,     |      __/ /        ";
								cout << "\n        /   |   |   )  ,,| |                              |O  ,__,   O|     / __/         ";
								cout << "\n        |   |___|   | / /| |                              (           |  __/ /            ";
								cout << "\n        |      .    |/ / | |                              |-    .    -| / __/             ";
								cout << "\n        (   // .    | /  | |                              |  //    // |/ /                ";
								cout << "\n        |  //  .    |/   |_/                              | //    //  | /                 ";
								cout << "\n        | '''  .    |                                     |'''   '''  |/                  ";
								cout << "\n        |___________/                                     |_____/|____|                   ";
								cout << "\n         /;/    /;/                                        /;/     /;/                    ";
								cout << "\n        /_/    /_/                                        /_/     /_/                     ";
								cout << "\n\n          Hrac1                                              Hrac2	             ";
								cout << endl << endl << endl;
								cout << "Hrac1 bol porazeny.Gratulujem vyhral si!!" << endl;
								system("PAUSE");
								break;
							}
						}
						break;
					case 3:
						return 0;
						break;
					}
				}
			}
		}

	else if (volba == 2) {
		int pikachuXP = 0;
		int cuboneXP = 0;
		int level = 0;
		int XPruleta;
		string meno;
		int ja;
		bool start;
		cout << "Zadaj svoje hracske meno: ";
		cin >> meno;
		if (meno == "elena") {
			mince = mince + 1000;
			pikachuXP = pikachuXP + 1000;
			cuboneXP = cuboneXP + 1000;
		}
		cout << "HRA POKEMONI" << endl;
		cout << "Vitaj trener" << endl;
		cout << "Za vyhrate zapasy pokemonov mozes ziskat mince" << endl;
		cout << "Mince mozes vyuzit neskor v obchode" << endl;
		cout << "Stlac 1 aby si spustil hru inak budes vyhodeny:" << endl;
		cin >> start;
		if (start < 1 || start > 1) {
			return 0;
		}
		if (start == false) {
			return 0;
		}
//hlavne menu
		if (start == true) {
			while (true) {
				int jaHP = 100;
				int pcHP = 100;
				cout << "\n Ziskane mince: " << mince << "x                                                  \n";
				cout << "\n            | 100HP |                                      | 100HP |             " << meno;
				cout << "\n                                                                                 " << "LVL " << level;
				cout << "\n            ,       ,                                      ?_______?             ";
				cout << "\n           /|      /)                                    __|       |__           ";
				cout << "\n          / |  ,  / |                                   |             |     ,    ";
				cout << "\n         /  |____/  |                                   |   (.)  (.)  |    /|    ";
				cout << "\n        (           :          ,                        |_           _|   / |_   ";
				cout << "\n        | (.)   (.) |         /|                          |   ,.,   |    |_ _|   ";
				cout << "\n        |     ,     |      __/ /                          |__     __|     | |    ";
				cout << "\n        |O  ,__,   O|     / __/                          /   |   |   )  ,,| |    ";
				cout << "\n        (           |  __/ /                            |    |___|   | / /| |    ";
				cout << "\n        |-    .    -| / __/                             |      .     |/ / | |    ";
				cout << "\n        |  //    // |/ /                                (   // .     | /  | |    ";
				cout << "\n        | //    //  | /                                 |  //  .     |/   |_/    ";
				cout << "\n        |'''   '''  |/                                  | '''  .     |           ";
				cout << "\n        |_____/|____|                                   |____________/           ";
				cout << "\n         /;/     /;/	                                   /;/    /;/               ";
				cout << "\n        /_/     /_/	                                  /_/    /_/                ";
				cout << endl << endl << "        Pikachu (1)                                        Cubone (2)				Obchod (3)";
				cout << endl << "           [" << pikachuXP << "XP]                                              [" << cuboneXP << "XP]";
				cout << "\n\n(Do obchodu smies vstupit az ked budes mat aspon 2 mince)                                     Ukoncit (4)";
				cout << "\nKazdy pokemon ma zakladne zivoty 100HP";
				cout << "\nVyber si pokemona podla cisla";
				cout << "\nVybrat si pokemona alebo operaciu:";
//hra(boj)
				int pkmn;
				cin >> pkmn;
				switch (pkmn) {
//pokemon(1)
				case 1:
					while (true) {
						cout << "\n             |" << jaHP << "HP|                                        |" << pcHP << "HP|       ";
						cout << "\n                                                                                 ";
						cout << "\n            ,       ,                                      ?_______?             ";
						cout << "\n           /|      /)                                    __|       |__           ";
						cout << "\n          / |  ,  / |                                   |             |     ,    ";
						cout << "\n         /  |____/  |                                   |   (.)  (.)  |    /|    ";
						cout << "\n        (           :          ,                        |_           _|   / |_   ";
						cout << "\n        | (.)   (.) |         /|                          |   ,.,   |    |_ _|   ";
						cout << "\n        |     ,     |      __/ /                          |__     __|     | |    ";
						cout << "\n        |O  ,__,   O|     / __/                          /   |   |   )  ,,| |    ";
						cout << "\n        (           |  __/ /                            |    |___|   | / /| |    ";
						cout << "\n        |-    .    -| / __/                             |      .     |/ / | |    ";
						cout << "\n        |  //    // |/ /                                (   // .     | /  | |    ";
						cout << "\n        | //    //  | /                                 |  //  .     |/   |_/    ";
						cout << "\n        |'''   '''  |/                                  | '''  .     |           ";
						cout << "\n        |_____/|____|                                   |____________/           ";
						cout << "\n         /;/     /;/	                                   /;/    /;/               ";
						cout << "\n        /_/     /_/	                                  /_/    /_/                ";
						cout << endl << endl << endl;
						srand(time(0));
						cout << "Pomocou cisla si vyberes utok:" << endl;
						cout << "(1) bleskovy utok" << endl;
						cout << "(2) hromovy sok" << endl;
						cout << "(3) vyliecit sa" << endl;
						cout << "Vyber si utok:" << endl;
//moje utoky (ja)
						int jautok = (rand() % 21);
						if (level == 1) {
							jautok = (rand() % 24 + 1);
						}
						else if (level == 2) {
							jautok = (rand() % 28 + 1);
						}
						else if (level == 3) {
							jautok = (rand() % 32 + 1);
						}
						int ja;
						cin >> ja;
						switch (ja) {
						case 1:
							if (jautok == 20 || jautok == 10) {
								pcHP = pcHP - 10 - jautok;
								cout << endl << "Dal si kriticky zasah" << endl;
								cout << "Ubral si: " << jautok + 10 << "HP" << endl;
							}
							else {
								pcHP = pcHP - jautok;
								cout << endl << "Ubral si: " << jautok << "HP" << endl;
							}
							break;
						case 2:
							if (jautok == 20 || jautok == 10) {
								pcHP = pcHP - 10 - jautok;
								cout << endl << "Dal si kriticky zasah" << endl;
								cout << "Ubral si: " << jautok + 10 << "HP" << endl;
							}
							else {
								pcHP = pcHP - jautok;
								cout << endl << "Ubral si: " << jautok << "HP" << endl;
							}
							break;
						case 3:
							if (jautok == 20 || jautok == 10) {
								jaHP = jaHP + 10 + jautok;
								cout << endl << "Dal si kriticke liecenie" << endl;
								cout << "Vyliecil si sa o: " << jautok + 10 << "HP" << endl;
							}
							else {
								jaHP = jaHP + jautok;
								cout << endl << "Vyliecil si sa o: " << jautok << "HP" << endl;
							}
						}
//utoky pocitaca(pc)
						int pcutok = (rand() % 21);
						switch ((rand() % 3) + 1) {
						case 1:
							if (pcutok == 20 || pcutok == 10) {
								jaHP = jaHP - 10 - pcutok;
								cout << "Protivnik dal kriticky zasah" << endl;
								cout << "Ubral ti: " << pcutok + 10 << "HP" << endl;
							}
							else {
								jaHP = jaHP - pcutok;
								cout << "Protivnik ti ubral : " << pcutok << "HP" << endl;
							}
							break;
						case 2:
							if (pcutok == 20 || pcutok == 10) {
								jaHP = jaHP - 10 - pcutok;
								cout << "Protivnik dal kriticky zasah" << endl;
								cout << "Ubral ti: " << pcutok + 10 << "HP" << endl;
							}
							else {
								jaHP = jaHP - pcutok;
								cout << "Protivnik ti ubral : " << pcutok << "HP" << endl;
							}
							break;
						case 3:
							if (pcutok == 20 || pcutok == 10) {
								pcHP = pcHP + 10 + pcutok;
								cout << "Protivnik dal kriticke liecenie" << endl;
								cout << "Vyliecil sa o: " << pcutok + 10 << "HP" << endl;
							}
							else {
								pcHP = pcHP + pcutok;
								cout << "Protivnik sa vyliecil o: " << pcutok << "HP" << endl;
							}
						}
						if (jaHP > 100) {
							jaHP = 100;
						}
						if (pcHP > 100) {
							pcHP = 100;
						}
//vyhra
						if (pcHP < 1) {
							cout << "\n             |" << jaHP << "HP|                                        |" << pcHP << "HP|       ";
							cout << "\n                                                                                 ";
							cout << "\n            ,       ,                                      ?_______?             ";
							cout << "\n           /|      /)                                    __|       |__           ";
							cout << "\n          / |  ,  / |                                   |             |     ,    ";
							cout << "\n         /  |____/  |                                   |   (.)  (.)  |    /|    ";
							cout << "\n        (           :          ,                        |_           _|   / |_   ";
							cout << "\n        | (.)   (.) |         /|                          |   ,.,   |    |_ _|   ";
							cout << "\n        |     ,     |      __/ /                          |__     __|     | |    ";
							cout << "\n        |O  ,__,   O|     / __/                          /   |   |   )  ,,| |    ";
							cout << "\n        (           |  __/ /                            |    |___|   | / /| |    ";
							cout << "\n        |-    .    -| / __/                             |      .     |/ / | |    ";
							cout << "\n        |  //    // |/ /                                (   // .     | /  | |    ";
							cout << "\n        | //    //  | /                                 |  //  .     |/   |_/    ";
							cout << "\n        |'''   '''  |/                                  | '''  .     |           ";
							cout << "\n        |_____/|____|                                   |____________/           ";
							cout << "\n         /;/     /;/	                                   /;/     /;/              ";
							cout << "\n        /_/     /_/	                                  /_/     /_/               ";
							cout << endl << endl << endl;
							pikachuXP = pikachuXP + 20;
							cout << "Protivnik bol porazeny.Gratulujem vyhral si!!" << endl;
							cout << "Teraz si mozes vybrat odmenu tym ze napises cislo z pola" << endl;
							cout << "Odmena nie je ista a maximalne mozes ziskat az 2 mince: " << endl;
//vyherna ruleta(pole)
							odmena();
							system("PAUSE");
							break;
						}
//prehra
						if (jaHP < 1) {
							cout << "\n             |" << jaHP << "HP|                                        |" << pcHP << "HP|       ";
							cout << "\n                                                                                 ";
							cout << "\n            ,       ,                                      ?_______?             ";
							cout << "\n           /|      /)                                    __|       |__           ";
							cout << "\n          / |  ,  / |                                   |             |     ,    ";
							cout << "\n         /  |____/  |                                   |   (.)  (.)  |    /|    ";
							cout << "\n        (           :          ,                        |_           _|   / |_   ";
							cout << "\n        | (.)   (.) |         /|                          |   ,.,   |    |_ _|   ";
							cout << "\n        |     ,     |      __/ /                          |__     __|     | |    ";
							cout << "\n        |O  ,__,   O|     / __/                          /   |   |   )  ,,| |    ";
							cout << "\n        (           |  __/ /                            |    |___|   | / /| |    ";
							cout << "\n        |-    .    -| / __/                             |      .     |/ / | |    ";
							cout << "\n        |  //    // |/ /                                (   // .     | /  | |    ";
							cout << "\n        | //    //  | /                                 |  //  .     |/   |_/    ";
							cout << "\n        |'''   '''  |/                                  | '''  .     |           ";
							cout << "\n        |_____/|____|                                   |____________/           ";
							cout << "\n         /;/     /;/	                                   /;/     /;/              ";
							cout << "\n        /_/     /_/	                                  /_/     /_/               ";
							cout << endl << endl << endl;
							cout << "Protivnik ta porazenil.Lutujem prehral si!!" << endl;
							system("PAUSE");
							break;
						}
					}
					break;
//pokemon (2)
				case 2:
					while (true) {
						cout << "\n           |" << jaHP << "HP|                                             |" << pcHP << "HP|                       ";
						cout << "\n          ?_______?			                      ,       ,                              ";
						cout << "\n        __|       |__                                        /|      /)                   ";
						cout << "\n       |             |     ,                                / |  ,  / |                   ";
						cout << "\n       |   (.)  (.)  |    /|                               /  |____/  |                   ";
						cout << "\n       |_           _|   / |_                             (           :          ,        ";
						cout << "\n         |   ,.,   |    |_ _|                             | (.)   (.) |         /|        ";
						cout << "\n         |__     __|     | |                              |     ,     |      __/ /        ";
						cout << "\n        /   |   |   )  ,,| |                              |O  ,__,   O|     / __/         ";
						cout << "\n        |   |___|   | / /| |                              (           |  __/ /            ";
						cout << "\n        |      .    |/ / | |                              |-    .    -| / __/             ";
						cout << "\n        (   // .    | /  | |                              |  //    // |/ /                ";
						cout << "\n        |  //  .    |/   |_/                              | //    //  | /                 ";
						cout << "\n        | '''  .    |                                     |'''   '''  |/                  ";
						cout << "\n        |___________/                                     |_____/|____|                   ";
						cout << "\n         /;/    /;/                                        /;/     /;/                    ";
						cout << "\n        /_/    /_/                                        /_/     /_/                     ";
						cout << endl << endl << endl;
						srand(time(0));
						cout << "Pomocou cisla si vyberes utok:" << endl;
						cout << "(1) zemny utok" << endl;
						cout << "(2) utok so zbranou" << endl;
						cout << "(3) vyliecit sa" << endl;
						cout << "Vyber si utok:" << endl;
						cin >> ja;
//moje utoky (ja)
						int jautok = (rand() % 21);
						if (level == 1) {
							jautok = (rand() % 24 + 1);
						}
						else if (level == 2) {
							jautok = (rand() % 28 + 1);
						}
						else if (level == 3) {
							jautok = (rand() % 32 + 1);
						}
						int ja;
						cin >> ja;
						switch (ja) {
						case 1:
							if (jautok == 20 || jautok == 10) {
								pcHP = pcHP - 10 - jautok;
								cout << endl << "Dal si kriticky zasah" << endl;
								cout << "Ubral si: " << jautok + 10 << "HP" << endl;
							}
							else {
								pcHP = pcHP - jautok;
								cout << endl << "Ubral si: " << jautok << "HP" << endl;
							}
							break;
						case 2:
							if (jautok == 20 || jautok == 10) {
								pcHP = pcHP - 10 - jautok;
								cout << endl << "Dal si kriticky zasah" << endl;
								cout << "Ubral si: " << jautok + 10 << "HP" << endl;
							}
							else {
								pcHP = pcHP - jautok;
								cout << endl << "Ubral si: " << jautok << "HP" << endl;
							}
							break;
						case 3:
							if (jautok == 20 || jautok == 10) {
								jaHP = jaHP + 10 + jautok;
								cout << endl << "Dal si kriticke liecenie" << endl;
								cout << "Vyliecil si sa o: " << jautok + 10 << "HP" << endl;
							}
							else {
								jaHP = jaHP + jautok;
								cout << endl << "Vyliecil si sa o: " << jautok << "HP" << endl;
							}
						}
//utoky pocitaca(pc)
						int pcutok = (rand() % 21);
						switch ((rand() % 3) + 1) {
						case 1:
							if (pcutok == 20 || pcutok == 10) {
								jaHP = jaHP - 10 - pcutok;
								cout << "Protivnik dal kriticky zasah" << endl;
								cout << "Ubral ti: " << pcutok + 10 << "HP" << endl;
							}
							else {
								jaHP = jaHP - pcutok;
								cout << "Protivnik ti ubral : " << pcutok << "HP" << endl;
							}
							break;
						case 2:
							if (pcutok == 20 || pcutok == 10) {
								jaHP = jaHP - 10 - pcutok;
								cout << "Protivnik dal kriticky zasah" << endl;
								cout << "Ubral ti: " << pcutok + 10 << "HP" << endl;
							}
							else {
								jaHP = jaHP - pcutok;
								cout << "Protivnik ti ubral : " << pcutok << "HP" << endl;
							}
							break;
						case 3:
							if (pcutok == 20 || pcutok == 10) {
								pcHP = pcHP + 10 + pcutok;
								cout << "Protivnik dal kriticke liecenie" << endl;
								cout << "Vyliecil sa o: " << pcutok + 10 << "HP" << endl;
							}
							else {
								pcHP = pcHP + pcutok;
								cout << "Protivnik sa vyliecil o: " << pcutok << "HP" << endl;
							}
						}
						if (jaHP > 100) {
							jaHP = 100;
						}
						if (pcHP > 100) {
							pcHP = 100;
						}
//vyhra
						if (pcHP < 1) {
							cout << "\n           |" << jaHP << "HP|                                             |" << pcHP << "HP|                       ";
							cout << "\n          ?_______?			                      ,       ,                              ";
							cout << "\n        __|       |__                                        /|      /)                   ";
							cout << "\n       |             |     ,                                / |  ,  / |                   ";
							cout << "\n       |   (.)  (.)  |    /|                               /  |____/  |                   ";
							cout << "\n       |_           _|   / |_                             (           :          ,        ";
							cout << "\n         |   ,.,   |    |_ _|                             | (.)   (.) |         /|        ";
							cout << "\n         |__     __|     | |                              |     ,     |      __/ /        ";
							cout << "\n        /   |   |   )  ,,| |                              |O  ,__,   O|     / __/         ";
							cout << "\n        |   |___|   | / /| |                              (           |  __/ /            ";
							cout << "\n        |      .    |/ / | |                              |-    .    -| / __/             ";
							cout << "\n        (   // .    | /  | |                              |  //    // |/ /                ";
							cout << "\n        |  //  .    |/   |_/                              | //    //  | /                 ";
							cout << "\n        | '''  .    |                                     |'''   '''  |/                  ";
							cout << "\n        |___________/                                     |_____/|____|                   ";
							cout << "\n         /;/    /;/                                        /;/     /;/                    ";
							cout << "\n        /_/    /_/                                        /_/     /_/                     ";
							cout << endl << endl << endl;
							cuboneXP = cuboneXP + 20;
							cout << "Protivnik bol porazeny.Gratulujem vyhral si!!" << endl;
							cout << "Teraz si mozes vybrat odmenu tym ze napises cislo z pola" << endl;
							cout << "Odmena nie je ista a maximalne mozes ziskat az 2 mince: " << endl;
//vyherna ruleta(pole)
							odmena();
							system("PAUSE");
							break;
						}
//prehra
						if (jaHP < 1) {
							cout << "\n           |" << jaHP << "HP|                                             |" << pcHP << "HP|                       ";
							cout << "\n          ?_______?			                      ,       ,                              ";
							cout << "\n        __|       |__                                        /|      /)                   ";
							cout << "\n       |             |     ,                                / |  ,  / |                   ";
							cout << "\n       |   (.)  (.)  |    /|                               /  |____/  |                   ";
							cout << "\n       |_           _|   / |_                             (           :          ,        ";
							cout << "\n         |   ,.,   |    |_ _|                             | (.)   (.) |         /|        ";
							cout << "\n         |__     __|     | |                              |     ,     |      __/ /        ";
							cout << "\n        /   |   |   )  ,,| |                              |O  ,__,   O|     / __/         ";
							cout << "\n        |   |___|   | / /| |                              (           |  __/ /            ";
							cout << "\n        |      .    |/ / | |                              |-    .    -| / __/             ";
							cout << "\n        (   // .    | /  | |                              |  //    // |/ /                ";
							cout << "\n        |  //  .    |/   |_/                              | //    //  | /                 ";
							cout << "\n        | '''  .    |                                     |'''   '''  |/                  ";
							cout << "\n        |___________/                                     |_____/|____|                   ";
							cout << "\n         /;/    /;/                                        /;/     /;/                    ";
							cout << "\n        /_/    /_/                                        /_/     /_/                     ";
							cout << endl << endl << endl;
							cout << "Protivnik ta porazenil.Lutujem prehral si!!" << endl;
							system("PAUSE");
							break;
						}
					}
					break;
//obchod
				case 3:
					if (mince == 2 || mince > 2) {
						cout << endl << endl << "Vitaj v obchode" << endl;
						cout << "Za vyhrate mince si mozes kupit XP na svojho pokemona" << endl;
						cout << "Za XP si mozes vylepsit svoj profil na vyssi LVL" << endl;
						cout << "Pomocou cisla si vyberes operaciu:" << endl;
						cout << "(1) Nakup XP" << endl;
						cout << "(2) Predaj XP" << endl;
						cout << "(3) Ukoncit obchod" << endl;
						cout << "Vyber si operaciu:" << endl;
						int obchod;
						cin >> obchod;
						cout << endl;
						switch (obchod) {
						case 1:
							int nakup;
							int ponuka;
							cout << "Nakup XP" << endl;
							cout << "Vyber si operaciu:" << endl;
							cout << "(1) Nakup XP" << endl;
							cout << "(2) Ruleta na XP" << endl;
							cout << "(3) Ukoncit" << endl;
							cin >> nakup;
							cout << endl;
//nakup XP
							switch (nakup) {
							case 1:
								cout << "Nakup XP" << endl;
								cout << "Vyber si ponuku:" << endl;
								cout << "(1) 1 minca = 20XP na Pikachu " << endl;
								cout << "(2) 2 minca = 40XP na Pikachu" << endl;
								cout << "(3) 1 minca = 20XP na Cubone" << endl;
								cout << "(4) 2 minca = 40XP na Cubone" << endl;
								cout << "(5) Ukoncit " << endl;
								cin >> ponuka;
								switch (ponuka) {
								case 1:
									mince = mince - 1;
									pikachuXP = pikachuXP + 20;
									break;
								case 2:
									mince = mince - 2;
									pikachuXP = pikachuXP + 40;
									break;
								case 3:
									mince = mince - 1;
									cuboneXP = cuboneXP + 20;
									break;
								case 4:
									mince = mince - 2;
									cuboneXP = cuboneXP + 40;
									break;
								case 5:
									break;
									break;
								}
								break;
							case 2:
								cout << "Ruleta na XP" << endl;
								cout << "Za ruletu musis zaplatit 1 mincu" << endl;
								cout << "Sanca nie je ista a maximalna odmena je 40XP" << endl;
								cout << "Vyber si cislo alebo stlac 10 ak chces odist: " << endl;
								do {
									srand(time(0));
									int poleruleta[3][3] = {
										{ 1,2,3 },
										{ 4,5,6 },
										{ 7,8,9 }
									};
									cout << endl;
									for (int c = 0; c < 3; c++) {
										for (int d = 0; d < 3; d++)
											cout << " " << poleruleta[c][d];
										cout << endl;
									}
									cout << endl;
									int rando2 = (rand() % 41);
									cin >> XPruleta;
									switch (XPruleta) {
									case 1:
										pikachuXP = pikachuXP + rando2;
										mince = mince - 1;
										cout << endl << "Vyhral si " << rando2 << "XP na Pikachu" << endl;
										break;
									case 2:
										cuboneXP = cuboneXP + rando2;
										mince = mince - 1;
										cout << endl << "Vyhral si " << rando2 << "XP na Cubone" << endl;
										break;
									case 3:
										pikachuXP = pikachuXP + rando2;
										mince = mince - 1;
										cout << endl << "Vyhral si " << rando2 << "XP na Pikachu" << endl;
										break;
									case 4:
										cuboneXP = cuboneXP + rando2;
										mince = mince - 1;
										cout << endl << "Vyhral si " << rando2 << "XP na Cubone" << endl;
										break;
									case 5:
										pikachuXP = pikachuXP + rando2;
										mince = mince - 1;
										cout << endl << "Vyhral si " << rando2 << "XP na Pikachu" << endl;
										break;
									case 6:
										cuboneXP = cuboneXP + rando2;
										mince = mince - 1;
										cout << endl << "Vyhral si " << rando2 << "XP na Cubone" << endl;
										break;
									case 7:
										pikachuXP = pikachuXP + rando2;
										mince = mince - 1;
										cout << endl << "Vyhral si " << rando2 << "XP na Pikachu" << endl;
										break;
									case 8:
										cuboneXP = cuboneXP + rando2;
										mince = mince - 1;
										cout << endl << "Vyhral si " << rando2 << "XP na Cubone" << endl;
										break;
									case 9:
										pikachuXP = pikachuXP + rando2;
										mince = mince - 1;
										cout << endl << "Vyhral si " << rando2 << "XP na Pikachu" << endl;
										break;
									case 10:
										break;
										break;
									}
									break;
								} while (mince = mince - 1);
							case 3:
								break;
								break;
							}
							break;
//predaj XP
						case 2:
							int vylepsenie;
							if (pikachuXP >= 100) {
								cout << "Predaj XP" << endl;
								cout << "Za 100XP od urciteho pokemona si mozes vylepsit profil o 1 LVL" << endl;
								cout << "Kazdym levelom budes mat vacsiu silu o 13,4% sily na pokemonovi" << endl;
								cout << "Vyber si operaciu:" << endl;
								cout << "(1) 100XP = 1 LVL" << endl;
								cin >> vylepsenie;
								if (vylepsenie == 1) {
									pikachuXP = pikachuXP - 100;
									level++;
									break;
								}
							}
							else if (cuboneXP >= 100) {
								cout << "Predaj XP" << endl;
								cout << "Za 100XP od urciteho pokemona si mozes vylepsit profil o 1 LVL" << endl;
								cout << "Kazdym levelom budes mat vacsiu silu o 13,4% sily na pokemonovi" << endl;
								cout << "Vyber si operaciu:" << endl;
								cout << "(1) 100XP = 1 LVL" << endl;
								cin >> vylepsenie;
								if (vylepsenie == 1) {
									cuboneXP = cuboneXP - 100;
									level++;
									break;
								}
							}
							else {
								cout << endl << "Potrebujes mat aspon 100XP na pokemonovi aby si mohol vstupit" << endl;
								system("PAUSE");
							}
							break;
//Ukoncenie
						case 3:
							break;
							break;
						}
						break;
					}
					else {
						break;
					}
					break;
				case 4:
					return 0;
					break;
				}
				if (level == 5) {
					cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
					cout << "\t\t\tDAKUJEM ZA DOHRATIE TEJTO HRY" << endl << endl;
					cout << "\  						 Adrian\n";
					system("PAUSE");
					return 0;
				}
			}
		}
	}

	else {
		return 0;
	}
}