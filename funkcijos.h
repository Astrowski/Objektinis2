#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <iostream>
#include <iomanip>
#include <vector>
#include <list>
#include <algorithm>
#include <time.h>
#include <stdlib.h>
#include <fstream>
#include <cmath>
#include <chrono>
#include <numeric>
#include <sstream>
#include <istream>
#include <string>

using namespace std::chrono;


class Studentas {
private:
	std::string vardas;
	std::string pavarde;
	int n;
	std::vector <int> pazymiai;
	int egzas;
	double final;
public:
	Studentas() : final(0) { } // def konstruktorius
	Studentas(std::string name, std::string surname);
	// -------------------- Getteriai ----------------------
	inline std::string getVardas() const { return vardas; }
	inline std::string getPavarde() const { return pavarde; }
	inline std::vector<int> getPazymiai() const { return pazymiai; }
	inline int getEgzas() const { return egzas; }
	inline int getN() const { return n; }
	inline int getFinal() const { return final; }

	// -------------------- Setteriai -----------------------
	inline void setVardas(std::string _vardas) { Studentas::vardas = _vardas; }
	inline void setPavarde(std::string _pavarde) { Studentas::pavarde = _pavarde; }
	inline void setPazymiai(std::vector<int> _nd) { Studentas::pazymiai = _nd; }
	inline void setEgzas(int _egzas) { Studentas::egzas = _egzas; }
	inline void setN(int _n) { Studentas::n = _n; }
	inline void setFinal(double _final) { Studentas::final = _final; }

	Studentas(const Studentas& other) :
		vardas(other.vardas),
		pavarde(other.pavarde),
		pazymiai(other.pazymiai),
		egzas(other.egzas),
		n(other.n),
		final(other.final) {}

	Studentas& operator = (const Studentas& other)
	{
		vardas = other.vardas;
		pavarde = other.pavarde;
		pazymiai = other.pazymiai;
		egzas = other.egzas;
		n = other.n;
		final = other.final;
		return *this;
	}

	~Studentas() {}; //Destruktorius
};
bool tikrink();
char pasirink1(char&);
char pasirink2(char&);
int tikrinkSk();
int paz();
void checkGrade(int&);

void NewStudent(std::vector <Studentas>&, char);

template <class T>
void ivesk(T&, std::string, char, bool);

void isvesk(std::vector <Studentas>, char);

template <class T>
void spausdink(T, T, char, std::string);

template <class T>
void print(T, char, std::string);

bool FileExist();
bool rusiuok(Studentas, Studentas);
void generuok(int, std::string);

double skaiciuok(std::vector <int>, int, int, char);			// update this in normal function of program

template <class T>
void grupuok1(T, T&, T&, int);

template <class T>
void grupuok2(T&, T&, int);

template <class T>
void grupuokOpt(T&, T&, int);

template <class T>
void mainFunc(T, T, T, bool, char, char);

template <class T>
void mainFuncList(T, T, T, bool, char, char);

void tirkVec(bool, char, char);

void tirkList(bool, char, char);

void tyrimas();

#endif