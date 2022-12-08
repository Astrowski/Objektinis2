#include "funkcijos.h"

int main() {
	srand(time(NULL));
	char rc = '0';		// rc pasirinkimui isvesti duomenis
	bool vid, timeOut;
	std::cout << "Ar norite atlikti programos veikimo (greicio) analize? (Y/N): ";
	if (tikrink())
	{
		tyrimas();
	}
	else
	{
		std::vector <Studentas> studentas;
		if (FileExist())
		{
			std::cout << "Ar norite skaityti duomenis is failo ar duomenis ivesti rankiniu budu? (y - file / n - manually): ";
			if (tikrink())
			{
				ivesk(studentas, "Studentai.txt", rc, false);
			}
			else
			{
				do
				{
					NewStudent(studentas);
					std::cout << std::endl << "Ar norite prideti dar viena studenta? (Y/N) ";
				} while (tikrink());
			}
		}
		else 			// tik rankinis ivedimas
		{
			std::cout << "Failas nerastas. Duomenys privalo buti ivesti rankiniu budu." << std::endl << std::endl;
			do
			{
				NewStudent(studentas);
				std::cout << std::endl << "Ar norite prideti dar viena studenta? (Y/N) ";
			} while (tikrink());
		}
		sort(studentas.begin(), studentas.end(), rusiuok);
		std::cout << std::endl << "Ar norite apskaiciuoti mediana(1), vidurki(2), ar abu(3)? ";
		pasirink1(rc);
		isvesk(studentas, rc);
	}
	system("PAUSE");
}