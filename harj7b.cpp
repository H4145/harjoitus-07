/*
Eetu Salo

Harjoitus 7 (palautus vko 40)

Tee ohjelma, joka kysyy k�ytt�j�lt� nimen, pituuden senttein� ja painon kiloina.
Ohjelma laskee ja tulostaa k�ytt�j�n ihannepainon (pituus-100). Lis�ksi
ohjelma kertoo k�ytt�j�n nykyisen painon eron kiloina verrattuna ihanne-
painoon. Ohjelman k�ytt�liittym� toimii seuraavasti:

Ihannepaino

Ohjelma laskee ihannepainosi
pituutesi perusteella.

Anna nimesi > Mooses
Anna pituutesi senttein� > 175
Anna osoitteesi > Peikkovuori 5 as 4
Anna painosi kiloina > 89


Arvoisa Mooses
Osoitteesi on Peikkovuori 5 as 4
Nykyinen painosi 89.0 kg
Ihannepainosi 75.0 kg
Erotus 14.0 kg

*/




#include <iostream>
using namespace std;
int main()
{
	char kokonimi[30];
	int pituus;
	char osoite[30];
	int paino;
	cout << "\nNimi? ";
	
	cin.get(kokonimi, 30);
	cout << "Pituus senttein�? ";
	cin >> pituus;
	cout << "Osoite? ";
	cin.get();
	cin.get(osoite, 30);
	cout << "Paino kiloina? ";
	cin >> paino;
	cout << "\nArvoisa " <<kokonimi;
	cout << "\nOsoitteesi on " <<osoite;
	cout << "\nNykyinen painosi on " << paino;
	cout << "\nIhannepainosi on " << pituus - 100;
	cout << "\nErotus on " << paino - (pituus - 100);
	return 0;


}