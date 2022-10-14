#include <string>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>
#include <numeric>
#include <chrono>



struct duomenys {
	std::string vardas;
	std::string pavarde;
	std::vector<int> paz = { 0 }; //paztmiu vektorius
	int egzas; // egzamino rezultatas
	double rez = 0; // galutinis pazymys
};



int generuokSkaicius() // skaiciaus generavimas
{
	return rand() % 10 + 1;
}


std::vector<int> autoPazymiai(int m)
{
	std::vector<int> skaiciai;
	for (int i = 0; i < m; i++)
	{
		skaiciai.push_back(generuokSkaicius());
	}
	return skaiciai;


}


double skaiciuokRez(std::vector<int> skaiciai) {
	duomenys A;
	A.rez = 0.4 * std::accumulate(skaiciai.begin(), skaiciai.end(), 0) / skaiciai.size() + 0.6 * generuokSkaicius(); // vidurkio skaiciavimas
	return A.rez;
}


int generavimas(std::vector<int> pazymiai)
{
	int n;
	std::cout << "Iveskite studentu skaiciu: " << std::endl;
	std::cin >> n;
	std::string pavadinimas = "Studentai_" + std::to_string(n) + ".txt";
	auto start = std::chrono::high_resolution_clock::now();
	auto st = start;
	std::ofstream isvesk(pavadinimas);
	std::vector<int> skaiciai;
	duomenys A;
	isvesk << std::setw(20) << std::left << "Vardas"
		<< std::setw(20) << std::left << "Pavarde"
		<< std::setw(20) << std::left << "Galutinis(vid.)\n";



	for (int s = 1; s <= n; s = s + 1)
	{
		skaiciai = autoPazymiai(5);
		isvesk << std::setw(20) << "Vardas" + std::to_string(s) 
			<< std::setw(20) << "Pavarde" + std::to_string(s) 
			<< std::setw(18) << skaiciuokRez(skaiciai) 
			<< std::endl;;
		skaiciai.clear();

	}
	auto end = std::chrono::high_resolution_clock::now();
	std::chrono::duration<double> diff = end - start;
	std::cout << "Failo su " + std::to_string(n) + " studentu/-ais kurimas uztruko: " << diff.count() << " s\n";

	return n;
}
void skaitykDuomenis(std::vector<duomenys>& A, int n)
{
	int sk = 0; // studentu skaicius, kuris yra mazensis uz n
	std::ifstream skaityk;
	std::string pavadinimas = "Studentai_" + std::to_string(n) + ".txt";
	std::string buff;
	skaityk.open(pavadinimas);
	if (skaityk.is_open()) {

		auto start = std::chrono::high_resolution_clock::now();
		auto st = start;
		getline(skaityk >> std::ws, buff);
		while (sk < n)
		{

			A.resize(A.size() + 1);
			skaityk >> A.at(sk).vardas;
			skaityk >> A.at(sk).pavarde;
			skaityk >> A.at(sk).rez;
			sk++;
		}
		auto end = std::chrono::high_resolution_clock::now();
		std::chrono::duration<double> diff = end - start;
		std::cout << "Failo su " + std::to_string(n) + " studentu/-ais nuskaitymas uztruko: " << diff.count() << " s\n";

	}


}


int main()  //atspausdina rezultatus

{
	std::vector<int> skaiciai;

	int n = generavimas(skaiciai);
	std::vector<duomenys> studentai;
	skaitykDuomenis(studentai, n);
	std::vector<duomenys> protingi;
	std::vector<duomenys> vargsiukai;
	int vargsai = 0;
	int proting = 0;

	auto start = std::chrono::high_resolution_clock::now();
	auto st = start;
	for (int i = 0; i < n; i++)
	{
		double paz = 5.00;
		if (studentai.at(i).rez < paz)
		{
			vargsiukai.push_back(studentai.at(i));
			vargsai++;
		}
	}
	for (int j = 0; j < n; j++)
	{
		double paz = 5.00;
		if (studentai.at(j).rez >= paz)
		{
			protingi.push_back(studentai.at(j));
			proting++;
		}
	}
	auto end = std::chrono::high_resolution_clock::now();
	std::chrono::duration<double> diff = end - start;
	std::cout << "Failo rusiavimas su " + std::to_string(n) + " studentais i dvi grupes uztruko : " << diff.count() << " s\n";



	std::string pav;
	pav = "vargsiukai_" + std::to_string(n) + ".txt";
	std::ofstream vargs_failas(pav);
	auto start1 = std::chrono::high_resolution_clock::now();
	auto st1 = start1;
	for (int i = 0; i < n; i++)
	{
		double paz = 5.00;
		if (studentai.at(i).rez < paz)
		{
			vargs_failas << studentai.at(i).vardas << std::setw(20) << studentai.at(i).pavarde << std::setw(18) << studentai.at(i).rez << std::endl;
		}

	}
	auto end1 = std::chrono::high_resolution_clock::now();
	std::chrono::duration<double> diff1 = end1 - start1;
	std::cout << "Failo isvedimas su " + std::to_string(n) + " studentais  i vargsiukus uztruko : " << diff1.count() << " s\n";

	pav = "protingi_" + std::to_string(n) + ".txt";
	std::ofstream prot_failas(pav);
	auto start2 = std::chrono::high_resolution_clock::now();
	auto st2 = start2;
	for (int j = 0; j < n; j++)
	{
		double paz = 5.00;
		if (studentai.at(j).rez >= paz)
		{
			prot_failas << studentai.at(j).vardas << std::setw(20) << studentai.at(j).pavarde << std::setw(18) << studentai.at(j).rez << std::endl;
		}
	}
	auto end2 = std::chrono::high_resolution_clock::now();
	std::chrono::duration<double> diff2 = end2 - start2;
	std::cout << "Failo isvedimas su " + std::to_string(n) + " studentais  i protingus uztruko : " << diff2.count() << " s\n";


}

