#include "app.h"
#include <iostream>

// read number of results
// read all student data
// read grade and output grade statistics
// read letter and output letter statistics
int main()
{
	int brojRezultata;
	std::string ime;
	int ocjena;

	std::cout << "Broj rezultata: " << std::endl;
	std::cin >> brojRezultata;
	vsite::oop::v3::results res(brojRezultata);

	for (int i = 0; i < brojRezultata; i++)
	{
		std::cout << "Ime: ";
		std::cin >> ime; 
		std::cout << std::endl;
		std::cout << "Ocjena: ";
		std::cin >> ocjena;
		std::cout << std::endl;
		res.add({ ime, ocjena });
	}

	int trazenaOcjena;
	int trazenoSlovo;

	std::cout << "Trazena ocjena: " << std::endl;
	std::cin >> trazenaOcjena;
	std::cout << std::endl;
	std::cout << "Broj ocjena: " << res.has_grade(trazenaOcjena) << std::endl;

	std::cout << "Trazeno slovo: " << std::endl;
	std::cin >> trazenoSlovo;
	std::cout << std::endl;
	std::cout << "Broj slova: " << res.starts_with_letter(trazenoSlovo) << std::endl;
}
