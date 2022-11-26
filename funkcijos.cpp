#include "funkcijos.h"



bool tikrink() 							// Y/N tikrinimas
{
	while (true) {
		char ats;
		std::cin >> ats;
		if (ats == 'y' || ats == 'Y')
		{
			return true;
		}
		else if (ats == 'n' || ats == 'N')
		{
			return false;
		}
		else
		{
			std::cout << "Blogai ivedete, badykite dar kart." << std::endl;
		}
	}
}

char pasirink(char& rc) 				
{
	while (true)
	{
		std::cin >> rc;
		if (rc == '1' || rc == '2' || rc == '3')
		{
			return rc;
		}
		else
		{
			std::cout << "Blogai ivedete, badykite dar kart. " << std::endl;
		}
	}
}

char pasirink2(char& rc)
{
	while (true)
	{
		std::cin >> rc;
		if (rc == '1' || rc == '2' )
		{
			return rc;
		}
		else
		{
			std::cout << "Blogai ivedete, badykite dar kart. " << std::endl;
		}
	}
}

int tikrinkSk() 							//Skaiciu inputo tikrinimas
{
	int num = 0;
	while (true)
	{
		std::cin >> num;
		if (num == -1) return -1;
		else if (num <= 0 or std::cin.fail())
		{
			std::cin.clear(); std::cin.ignore(999, '\n');
			std::cout << "Blogai ivedete, badykite dar kart." << std::endl;
		}
		else return num;
	}
}

void checkGrade(int& grade) {			// grade checkup
	while (true) {
		if (grade <= 10 && grade > 0) break;
		else std::cout << "Blogai ivedete, badykite dar kart.";
		grade = tikrinkSk();
	}
}
void studentai(std::vector <Studentas>& studentas) {			//Studento duomenu ivedimas (manualinis)
	bool pazym, sk;
	int z;
	Studentas stud;
	std::cout << "Iveskite studento varda: "; std::cin >> stud.vardas; std::cout << std::endl;
	std::cout << "Iveskite studento pavarde: "; std::cin >> stud.pavarde; std::cout << std::endl;
	std::cout << "Ar zinote atliktu namu darbu kieki? (Y/N): ";
	pazym = tikrink();
	if (pazym)
	{
		std::cout << std::endl << "Iveskite atliktu namu darbu kieki: ";
		stud.n = tikrinkSk();
		stud.pazymiai.resize(stud.n);

		std::cout << std::endl << "Ar norite, kad studento pazymiai butu sugeneruojami automatiskai? (Y/N): ";
		pazym = tikrink();
		if (pazym) 							// random skaiciu generavimas
		{
			z = stud.n;
			stud.pazymiai.resize(z);
			std::cout << std::endl << "Sugeneruoti studento pazymiai: ";
			for (int i = 0; i < stud.n; i++)
			{
				stud.pazymiai[i] = rand() % 10 + 1;
				std::cout << stud.pazymiai[i] << " ";
			}
			stud.egzas = rand() % 10 + 1;
			std::cout << std::endl << "Egzamino rezultatas: " << stud.egzas;
		}
		else
		{
			std::cout << std::endl << "Iveskite atliktu namu darbu pazymius: " << std::endl;
			for (int i = 0; i < stud.n; i++)
			{
				stud.pazymiai[i] = tikrinkSk();
				checkGrade(stud.pazymiai[i]);
			}
			std::cout << std::endl << "Iveskite egzamino pazymi: ";
			stud.egzas = tikrinkSk();
			checkGrade(stud.egzas);
		}
	}

	else
	{
		stud.n = rand() % 25 + 1;				// nd skaicius: 1-25
		std::cout << std::endl << "Sugeneruotas atliktu namu darbu kiekis: " << stud.n << std::endl;
		std::cout << std::endl << "Ar norite, kad studento pazymiai butu sugeneruojami automatiskai? (Y/N): ";
		sk = tikrink();
		if (sk) 								// random skaiciu generavimas
		{
			z = stud.n;
			stud.pazymiai.resize(z);
			std::cout << std::endl << "Sugeneruoti studento pazymiai: ";
			for (int i = 0; i < stud.n; i++)
			{
				stud.pazymiai[i] = rand() % 10 + 1;
				std::cout << stud.pazymiai[i] << " ";
			}
			stud.egzas = rand() % 10 + 1;
			std::cout << std::endl << "Egzamino rezultatas: " << stud.egzas;
		}
		else
		{
			std::cout << std::endl << "Iveskite atliktu namu darbu pazymius: " << std::endl;
			stud.pazymiai.resize(stud.n);
			for (int i = 0; i < stud.n; i++)
			{
				stud.pazymiai[i] = tikrinkSk();
				checkGrade(stud.pazymiai[i]);
			}

			std::cout << std::endl << "Iveskite egzamino pazymi: ";
			stud.egzas = tikrinkSk();
			checkGrade(stud.egzas);
		}
	}
	studentas.push_back(stud);
	stud.pazymiai.clear();
}

template <class T>
void ivesk(T& studentas, std::string fileName, char rc, bool timeOut) 			// ivestis
{
	std::ifstream file;
	try
	{
		file.open(fileName);
		if (!file)
		{
			throw 1;
		}
		std::string line;
		getline(file, line);
		while (getline(file, line))
		{
			Studentas stud;
			std::istringstream iss(line);
			iss >> stud.vardas >> stud.pavarde;
			int g;
			while (iss >> g)
			{
				stud.pazymiai.push_back(g);
			}
			if (stud.pazymiai.size() == 0)
			{
				throw 2;
			}

			stud.pazymiai.pop_back();
			stud.egzas = g;
			stud.n = stud.pazymiai.size();
			stud.final = skaiciuok(stud.pazymiai, stud.egzas, stud.n, rc);
			studentas.push_back(stud);
		}
	}
	catch (int e)
	{
		switch (e)
		{
		case 1:
			std::cout << "Failas nerastas." << std::endl << std::endl << "Baigiamas programos veikimas." << std::endl;
			break;
		case 2:
			std::cout << "Failas nuskaitytas netinkamai." << std::endl;
			break;
		}
		exit(1);
	}
	file.close();
}



void isvesk(std::vector <Studentas> studentas, char rc) 						// isvestis i konsole		
{
	std::cout << "\n\n\n\n\n";
	std::cout << std::left << std::setw(15) << "Vardas" << std::setw(15) << "Pavarde" << std::setw(18);
	if (rc == '2')
	{
		std::cout << "Galutinis (vid.)" << std::endl;
	}
	else if (rc == '1')
	{
		std::cout << "Galutinis (med.)" << std::endl;
	}
	else
	{
		std::cout << "Galutinis (vid.)" << std::setw(18) << "Galutinis (med.)" << std::endl;
	}
	if (rc == '3')
	{
		std::cout << "----------------------------------------------------------------" << std::endl;
	}
	else
	{
		std::cout << "-----------------------------------------------" << std::endl;
	}
	for (int i = 0; i < studentas.size(); i++)
	{
		double galutinisVid = 0;
		double galutinisMed = 0;
		double sum = 0;		//calc vid
		int size = studentas[i].pazymiai.size();
		for (int j = 0; j < size; j++)
		{
			sum = sum + studentas[i].pazymiai[j];
		}
		double average = sum / size;
		galutinisVid = studentas[i].egzas * 0.6 + average * 0.4;
		sort(studentas[i].pazymiai.begin(), studentas[i].pazymiai.end()); //calc med
		if (size % 2 == 0)
		{
			galutinisMed = (studentas[i].pazymiai[size / 2] / 2);
		}
		else
		{
			galutinisMed = ((studentas[i].pazymiai[size / 2] + studentas[i].pazymiai[size / 2 - 1]) / 2);
		}
		std::cout << std::left << std::setw(15) << studentas[i].vardas << std::setw(15) << studentas[i].pavarde << std::setw(18);
		if (rc == '1')
		{
			std::cout << std::fixed << std::setprecision(2) << galutinisMed << std::endl;
		}
		else if (rc == '2')
		{
			std::cout << std::fixed << std::setprecision(2) << galutinisVid << std::endl;
		}
		else
		{
			std::cout << std::fixed << std::setprecision(2) << galutinisVid << std::setw(18) << std::setprecision(2) << galutinisMed << std::endl;
		}
	}
}

template <class T>
void isvedimas(T protingi, T vargsai, char rc, std::string failas) 
{
	std::string pfile = "Protingi_" + failas;
	std::string vfile = "Vargsai_" + failas;
	std::ofstream pout(pfile);
	std::ofstream vout(vfile);
	pout << std::left << std::setw(20) << "Vardas" << std::setw(20) << "Pavarde" << std::setw(18);
	if (rc == '2')
	{
		pout << "Galutinis (vid.)" << std::endl;
	}
	else if (rc == '1')
	{
		pout << "Galutinis (med.)" << std::endl;
	}
	else
	{
		pout << "Galutinis (vid.)" << std::setw(18) << "Galutinis (med.)" << std::endl;
	}
	if (rc == '3')
	{
		pout << "-----------------------------------------------------------------------------------------------------" << std::endl;
	}
	else
	{
		pout << "-------------------------------------------------------------------" << std::endl;
	}
	vout << std::left << std::setw(20) << "Vardas" << std::setw(20) << "Pavarde" << std::setw(18);
	if (rc == '2')
	{
		vout << "Galutinis (vid.)" << std::endl;
	}
	else if (rc == '1')
	{
		vout << "Galutinis (med.)" << std::endl;
	}
	else
	{
		vout << "Galutinis (vid.)" << std::setw(18) << "Galutinis (med.)" << std::endl;
	}
	if (rc == '3')
	{
		vout << "-----------------------------------------------------------------------------------------------------" << std::endl;
	}
	else
	{
		vout << "-------------------------------------------------------------------" << std::endl;
	}
	for (auto& a : vargsai)
	{
		vout << std::left << std::setw(20) << a.vardas << std::setw(20) << a.pavarde << std::setw(18);
		vout << std::fixed << std::setprecision(2) << a.final << std::endl;
	}
	vout.close();
	for (auto& a : protingi)
	{
		pout << std::left << std::setw(20) << a.vardas << std::setw(20) << a.pavarde << std::setw(18);
		pout << std::fixed << std::setprecision(2) << a.final << std::endl;
	}
	pout.close();
}

template <class T>
void spausdink(T studentas, char rc, std::string failas)
{
	std::string galutinis;
	if (rc == '1')
	{
		std::string galutinis = "Galutinis (med.)";
	}
	else if (rc == '2')
	{
		std::string galutinis = "Galutinis (vid.)";
	}
	std::ofstream out(failas);
	out << std::left << std::setw(20) << "Vardas" << std::setw(20) << "Pavarde" << std::setw(18) << galutinis << std::endl
		<< "----------------------------------------------------------------------" << std::endl;
	for (auto stud : studentas) 
	{
		out << std::left << std::setw(20) << stud.vardas <<
			std::setw(20) << stud.pavarde <<
			std::setw(18) << std::fixed << std::setprecision(2) << stud.final << std::endl;
	}
}

bool FileExist() 		// Failo patikrinimas
{
	std::ifstream file;
	file.open("Studentai.txt");
	if (!file)
	{
		return 0;
	}
	else
	{
		std::cout << "File 'Studentai.txt' detected." << std::endl;
		return 1;
	}
}

bool rusiavimas(Studentas a, Studentas b) 				// rusiavimas
{
	if (a.vardas < b.vardas)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void generuok(int m, std::string fileName) 					// failo kurimas
{
	int a = 10;
	std::ofstream out(fileName);
	out << std::left << std::setw(20) << "Vardas" << std::setw(20) << "Pavarde";
	for (int i = 0; i < a; i++)
	{
		out << std::setw(8) << "ND" + std::to_string(i + 1);
	}
	out << std::setw(8) << "Egz." << std::endl;

	for (int i = 0; i < m; i++)
	{
		out << std::left << std::setw(20) << "Vardenis" + std::to_string(i + 1) << std::setw(20) << "Pavardenis" + std::to_string(i + 1);
		for (int j = 0; j <= a; j++)
		{
			out << std::setw(8) << rand() % 10 + 1;
		}
		out << std::endl;
	}
	out.close();
}

double skaiciuok(std::vector <int> pazymiai, int egzas, int n, char rc) 		//galutiniai skaiciavimai
{
	double final;
	if (rc == '2')
	{					//calc vid
		int sum;
		sum = accumulate(pazymiai.begin(), pazymiai.end(), 0);
		final = (sum * 1.0 / n) * 0.4 + egzas * 0.6;
	}
	else if (rc == '1')
	{
		//calc med
		sort(pazymiai.begin(), pazymiai.end());
		if (n % 2 == 0)
		{
			final = ((pazymiai[n / 2] + pazymiai[n / 2 - 1]) / 2.0);
		}
		else
		{
			final = (pazymiai[n / 2]);
		}
	}
	return final;
}

template <class T>
void grupuok1(T studentas, T& protingi, T& vargsai, int num)
{
	high_resolution_clock::time_point t1 = high_resolution_clock::now();
	std::copy_if(studentas.begin(), studentas.end(), std::back_inserter(protingi), [](Studentas const& stud) {return stud.final >= 5; });
	std::copy_if(studentas.begin(), studentas.end(), std::back_inserter(vargsai), [](Studentas const& stud) {return stud.final < 5; });
	std::cout << "Studentu rusiavimas i dvi grupes uztruko: " 
		<< std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::high_resolution_clock::now() - t1).count() / 1000. << " s." << std::endl;
}

template <class T>
void grupuok2(T& studentas, T& vargsai, int num)
{
	high_resolution_clock::time_point t1 = high_resolution_clock::now();
	auto it = std::stable_partition(studentas.begin(), studentas.end(), [](Studentas const& stud) {return stud.final >= 5; });
	vargsai.assign(it, studentas.end());
	studentas.erase(it, studentas.end());
	std::cout << "Studentu rusiavimas i dvi grupes uztruko: " << std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::high_resolution_clock::now() - t1).count() / 1000. << " s." << std::endl;
}

template <class T>
void grupuokOpt(T& studentas, T& vargsai, int num) {
	high_resolution_clock::time_point t1 = high_resolution_clock::now();
	std::copy_if(studentas.begin(), studentas.end(), std::back_inserter(vargsai), [](Studentas const& stud) {return stud.final < 5; });
	studentas.erase(std::remove_if(studentas.begin(), studentas.end(), [](Studentas const& stud) {return stud.final < 5; }), studentas.end());

	std::cout << "Studentu rusiavimas i dvi grupes uztruko: " << std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::high_resolution_clock::now() - t1).count() / 1000. << " s." << std::endl;
}
template <class T>
void mainFunc(T studentas, T protingi, T vargsai, bool generavimas, char rc, char grupavimas)
{
	int a = 4;
	int size[4] = { 1000, 10000, 100000, 1000000 };
	if (grupavimas == '1')
	{
		for (int i = 0; i < a; i++)
		{
			std::string studentai = "Studentai_" + std::to_string(size[i]) + ".txt";
			high_resolution_clock::time_point t1 = high_resolution_clock::now();
			std::cout << std::endl << "Failas " << studentai << std::endl;
			if (generavimas == 1)
			{
				generuok(size[i], studentai);
				ivesk(studentas, studentai, rc, true);
				grupuok1(studentas, protingi, vargsai, size[i]);
				spausdink(protingi, rc, "Protingi_" + studentai);
				spausdink(vargsai, rc, "Vargsai_" + studentai);
				std::cout << "Bendras failo " << studentai << " testavimo laikas: " <<
				std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::high_resolution_clock::now() - t1).count() / 1000. << "sekundes" << std::endl;
			}

		}
	}
	else if (grupavimas == '2')
	{
		for (int i = 0; i < a; i++)
		{
			std::string studentai = "Studentai_" + std::to_string(size[i]) + ".txt";
			high_resolution_clock::time_point t1 = high_resolution_clock::now();
			std::cout << std::endl << "Failas " << studentai << std::endl;
			if (generavimas == 1)
			{
				generuok(size[i], studentai);
				ivesk(studentas, studentai, rc, true);
				grupuok2(studentas, vargsai, size[i]);
				spausdink(protingi, rc, "Protingi_" + studentai);
				spausdink(vargsai, rc, "Vargsai_" + studentai);
				std::cout << "Bendras failo " << studentai << " testavimo laikas: " <<
					std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::high_resolution_clock::now() - t1).count() / 1000. << "sekundes" << std::endl;
			}

		}
	}
	else if (grupavimas == '3') 
	{
		for (int i = 0; i < a; i++)
		{
			std::string studentai = "Studentai_" + std::to_string(size[i]) + ".txt";
			high_resolution_clock::time_point t1 = high_resolution_clock::now();
			std::cout << std::endl << "Failas " << studentai << std::endl;
			if (generavimas == 1)
			{
				generuok(size[i], studentai);

				ivesk(studentas, studentai, rc, true);
				grupuokOpt(studentas, vargsai, size[i]);
				spausdink(studentas, rc, "Protingi_" + studentai);
				spausdink(vargsai, rc, "Vargsai_" + studentai);
				std::cout << "Bendras failo " << studentai << " testavimo laikas: " <<
					std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::high_resolution_clock::now() - t1).count() / 1000. << "sekundes" << std::endl;
			}
		}
	}
}

template <class T>
void mainFuncList(T studentas, T protingi, T vargsai, bool generavimas, char rc, char grupavimas)
{
	int a = 4;
	int size[4] = { 1000, 10000, 100000, 1000000 };
	if (grupavimas == '1')
	{
		for (int i = 0; i < a; i++)
		{
			std::string studentai = "Studentai_" + std::to_string(size[i]) + ".txt";
			high_resolution_clock::time_point t1 = high_resolution_clock::now();
			std::cout << std::endl << "Failas " << studentai << std::endl;
			if (generavimas == 1)
			{
				generuok(size[i], studentai);
				ivesk(studentas, studentai, rc, true);
				grupuok1(studentas, protingi, vargsai, size[i]);
				spausdink(protingi, rc, "Protingi_" + studentai);
				spausdink(vargsai, rc, "Vargsai_" + studentai);
				std::cout << "Bendras failo " << studentai << " testavimo laikas: " <<
					std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::high_resolution_clock::now() - t1).count() / 1000. << " s." << std::endl;
			}

		}
	}
	else if (grupavimas == '2')
	{
		for (int i = 0; i < a; i++)
		{
			std::string studentai = "Studentai_" + std::to_string(size[i]) + ".txt";
			high_resolution_clock::time_point t1 = high_resolution_clock::now();
			std::cout << std::endl << "Failas " << studentai << std::endl;
			if (generavimas == 1)
			{
				generuok(size[i], studentai);
				ivesk(studentas, studentai, rc, true);
				grupuok2(studentas, vargsai, size[i]);
				spausdink(protingi, rc, "Protingi_" + studentai);
				spausdink(vargsai, rc, "Vargsai_" + studentai);
				std::cout << "Bendras failo " << studentai << " testavimo laikas: " <<
					std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::high_resolution_clock::now() - t1).count() / 1000. << " s." << std::endl;
			}

		}
	}
}


void tirkVec(bool generuok, char rc, char grupavimas)
{
	std::vector <Studentas> studentas;
	std::vector <Studentas> protingi;
	std::vector <Studentas> vargsai;
	mainFunc(studentas, protingi, vargsai, generuok, rc, grupavimas);
	studentas.clear();
	protingi.clear();
	vargsai.clear();
}

void tirkList(bool generuok, char rc, char grupavimas)
{
	std::list <Studentas> studentas;
	std::list <Studentas> protingi;
	std::list <Studentas> vargsai;
	mainFuncList(studentas, protingi, vargsai, generuok, rc, grupavimas);
	studentas.clear();
	protingi.clear();
	vargsai.clear();
}

void tyrimas()
{
	bool generuok;
	char rc = '0';
	char grupavimas;
	std::cout << std::endl << "Pasirinkite testavimo strategija (1 / 2): " << std::endl
		<< "(1 - studentu skaidymas i du konteinerius)" << std::endl
		<< "(2 - studentu skaidymas panaudojant tik viena konteineri)" << std::endl
		<< "(3 - vector ir optimizuoto vector palyginimas)" << std::endl;
	pasirink(grupavimas);
	std::cout << std::endl << "Ar norite sugeneruoti studentu failus? (Y/N): ";
	if (tikrink())
	{
		generuok = 1;
	}
	else
	{
		generuok = 0;
	}
	std::cout << std::endl << "Ar norite apskaiciuoti mediana(1), ar vidurki(2)? ";
	pasirink2(rc);
	if (grupavimas == '1')
	{
		std::cout << "Naudojama 1 strategija" << std::endl;

		std::cout << std::endl << "--------------------------- Pradedamas testavimas naudojant vector: -----------------------------------------------" << std::endl;
		tirkVec(generuok, rc, grupavimas);

		std::cout << std::endl << "----------------------------- Pradedamas testavimas naudojant list: ---------------------------------------------" << std::endl;
		tirkList(generuok, rc, grupavimas);
	}
	else if (grupavimas == '2')
	{
		std::cout << "Naudojama 2 strategija" << std::endl;

		std::cout << std::endl << "--------------------------- Pradedamas testavimas naudojant vector: -----------------------------------------------" << std::endl;
		tirkVec(generuok, rc, grupavimas);

		std::cout << std::endl << "----------------------------- Pradedamas testavimas naudojant list: ---------------------------------------------" << std::endl;
		tirkList(generuok, rc, grupavimas);
	}
	else
	{
		std::cout << "VYKDOMAS VECTOR VEIKIMO SPARTOS PALYGINIMAS. " << std::endl
			<< "(Palyginimui naudojama antroji strategija) " << std::endl;

		std::cout << std::endl << "--------------------------- Pradedamas testavimas naudojant vector: -----------------------------------------------" << std::endl;
		tirkVec(generuok, rc, '2');
		
		std::cout << std::endl << "--------------------------- Pradedamas testavimas naudojant optimizuota vector: -----------------------------------" << std::endl;
		tirkVec(generuok, rc, '3');
	}
}
