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

// struct Studentai{
// 	string vardas;
// 	string pavarde;
// 	int n;
// 	vector <int> pazymiai;
// 	int egzas;
// 	double final;
// };

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
	inline void setVardas(std::string vardas) { Studentas::vardas = vardas; }
	inline void setPavarde(std::string pavarde) { Studentas::pavarde = pavarde; }
	inline void setPazymiai(std::vector<int> nd) { Studentas::pazymiai = nd; }
	inline void setEgzas(int egzas) { Studentas::egzas = egzas; }
	inline void setN(int n) { Studentas::n = n; }
	inline void setFinal(double final) { Studentas::final = final; }
};

bool tikrink();
char pasirink1(char&);
char pasirink2(char&);
int tikrinkSk();
int paz();
void checkGrade(int&);

void NewStudent(std::vector <Studentas>&);

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