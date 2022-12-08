# Skaičiuoklė #
Programa leidžainti apskaičiuoti studentų vidurkį ir medianą.
# Veikimo principas #
Paleidus programą yra prašoma įvesti duomenis:

* Studento vardą bei pavardę;
* Namų darbų kiekį;
* Namų darbų bei egzamino rezultatus.

> Taip pat programa suteikia galimybę sugeneruoti atsitiktinius namų darbų bei egzamino rezultatus.

### 1 STRATEGIJA ###
```
Ar norite atlikti programos veikimo (greicio) analize? (Y/N): y

Pasirinkite testavimo strategija (1 / 2 / 3):
(1 - studentu skaidymas i du konteinerius)
(2 - studentu skaidymas panaudojant tik viena konteineri)
(3 - vector ir optimizuoto vector palyginimas)
1

Ar norite sugeneruoti studentu failus? (Y/N): y

Ar norite apskaiciuoti mediana(1), ar vidurki(2)? 1
Naudojama 1 strategija

--------------------------- Pradedamas testavimas naudojant vector: -----------------------------------------------

Failas Studentai_1000.txt
Studentu rusiavimas i dvi grupes uztruko: 0 s.
Bendras failo Studentai_1000.txt testavimo laikas: 0.059sekundes

Failas Studentai_10000.txt
Studentu rusiavimas i dvi grupes uztruko: 0.01 s.
Bendras failo Studentai_10000.txt testavimo laikas: 0.417sekundes

Failas Studentai_100000.txt
Studentu rusiavimas i dvi grupes uztruko: 0.054 s.
Bendras failo Studentai_100000.txt testavimo laikas: 3.44sekundes

Failas Studentai_1000000.txt
Studentu rusiavimas i dvi grupes uztruko: 0.781 s.
Bendras failo Studentai_1000000.txt testavimo laikas: 35.107sekundes

----------------------------- Pradedamas testavimas naudojant list: ---------------------------------------------

Failas Studentai_1000.txt
Studentu rusiavimas i dvi grupes uztruko: 0 s.
Bendras failo Studentai_1000.txt testavimo laikas: 0.055 s.

Failas Studentai_10000.txt
Studentu rusiavimas i dvi grupes uztruko: 0.002 s.
Bendras failo Studentai_10000.txt testavimo laikas: 0.367 s.

Failas Studentai_100000.txt
Studentu rusiavimas i dvi grupes uztruko: 0.034 s.
Bendras failo Studentai_100000.txt testavimo laikas: 3.385 s.

Failas Studentai_1000000.txt
Studentu rusiavimas i dvi grupes uztruko: 0.397 s.
Bendras failo Studentai_1000000.txt testavimo laikas: 34.33 s.
```

### 2 STRATEGIJA ###
```
Ar norite atlikti programos veikimo (greicio) analize? (Y/N): y

Pasirinkite testavimo strategija (1 / 2 / 3):
(1 - studentu skaidymas i du konteinerius)
(2 - studentu skaidymas panaudojant tik viena konteineri)
(3 - vector ir optimizuoto vector palyginimas)
2

Ar norite sugeneruoti studentu failus? (Y/N): y

Ar norite apskaiciuoti mediana(1), ar vidurki(2)? 2
Naudojama 2 strategija

--------------------------- Pradedamas testavimas naudojant vector: -----------------------------------------------

Failas Studentai_1000.txt
Studentu rusiavimas i dvi grupes uztruko: 0 s.
Bendras failo Studentai_1000.txt testavimo laikas: 0.038sekundes

Failas Studentai_10000.txt
Studentu rusiavimas i dvi grupes uztruko: 0.001 s.
Bendras failo Studentai_10000.txt testavimo laikas: 0.259sekundes

Failas Studentai_100000.txt
Studentu rusiavimas i dvi grupes uztruko: 0.017 s.
Bendras failo Studentai_100000.txt testavimo laikas: 2.674sekundes

Failas Studentai_1000000.txt
Studentu rusiavimas i dvi grupes uztruko: 0.261 s.
Bendras failo Studentai_1000000.txt testavimo laikas: 27.433sekundes

----------------------------- Pradedamas testavimas naudojant list: ---------------------------------------------

Failas Studentai_1000.txt
Studentu rusiavimas i dvi grupes uztruko: 0 s.
Bendras failo Studentai_1000.txt testavimo laikas: 0.039 s.

Failas Studentai_10000.txt
Studentu rusiavimas i dvi grupes uztruko: 0.002 s.
Bendras failo Studentai_10000.txt testavimo laikas: 0.274 s.

Failas Studentai_100000.txt
Studentu rusiavimas i dvi grupes uztruko: 0.027 s.
Bendras failo Studentai_100000.txt testavimo laikas: 2.693 s.

Failas Studentai_1000000.txt
Studentu rusiavimas i dvi grupes uztruko: 0.377 s.
Bendras failo Studentai_1000000.txt testavimo laikas: 27.102 s.
```

### 3 STRATEGIJA ###
```
Ar norite atlikti programos veikimo (greicio) analize? (Y/N): y

Pasirinkite testavimo strategija (1 / 2 / 3):
(1 - studentu skaidymas i du konteinerius)
(2 - studentu skaidymas panaudojant tik viena konteineri)
(3 - vector ir optimizuoto vector palyginimas)
3

Ar norite sugeneruoti studentu failus? (Y/N): y

Ar norite apskaiciuoti mediana(1), ar vidurki(2)? 2
VYKDOMAS VECTOR VEIKIMO SPARTOS PALYGINIMAS.
(Palyginimui naudojama antroji strategija)

--------------------------- Pradedamas testavimas naudojant vector: -----------------------------------------------

Failas Studentai_1000.txt
Studentu rusiavimas i dvi grupes uztruko: 0 s.
Bendras failo Studentai_1000.txt testavimo laikas: 0.051sekundes

Failas Studentai_10000.txt
Studentu rusiavimas i dvi grupes uztruko: 0.001 s.
Bendras failo Studentai_10000.txt testavimo laikas: 0.271sekundes

Failas Studentai_100000.txt
Studentu rusiavimas i dvi grupes uztruko: 0.017 s.
Bendras failo Studentai_100000.txt testavimo laikas: 2.645sekundes

Failas Studentai_1000000.txt
Studentu rusiavimas i dvi grupes uztruko: 0.294 s.
Bendras failo Studentai_1000000.txt testavimo laikas: 29.103sekundes

--------------------------- Pradedamas testavimas naudojant optimizuota vector: -----------------------------------

Failas Studentai_1000.txt
Studentu rusiavimas i dvi grupes uztruko: 0 s.
Bendras failo Studentai_1000.txt testavimo laikas: 0.074sekundes

Failas Studentai_10000.txt
Studentu rusiavimas i dvi grupes uztruko: 0.004 s.
Bendras failo Studentai_10000.txt testavimo laikas: 0.344sekundes

Failas Studentai_100000.txt
Studentu rusiavimas i dvi grupes uztruko: 0.034 s.
Bendras failo Studentai_100000.txt testavimo laikas: 3.384sekundes

Failas Studentai_1000000.txt
Studentu rusiavimas i dvi grupes uztruko: 0.347 s.
Bendras failo Studentai_1000000.txt testavimo laikas: 35.055sekundes
```

# Programos įdiegimas ir naudojimasis #

* Atsisiųskite vieną programos versijų iš [Releases](https://github.com/Astrowski/My-first-project) aplanko ir ją išarchyvuokite.
* Atsisiųskite jums patinkančią __C++__ palaikančią programą (_[Visual Studio](https://visualstudio.microsoft.com/downloads/), [CodeBlocks](https://www.codeblocks.org/downloads/)_).
* Atsidarykite pateiktą programos kodą ir jį paleiskite arba komandinėje eiltuėje įrašykite `g++ -o main *.cpp` ir paleiskite su `./main`

# Releases #
[v0.1](https://github.com/Astrowski/My-first-project/tree/v.01) - pirminė versija

[v0.2](https://github.com/Astrowski/My-first-project/tree/v.02) - antra versija
* Pridėtas duomenų skaitymas iš failo.
* Pridėta galimybė spausdinti vidurkį ir medianą kartu.
* Studentai yra automatiškai išrūšiuojami pagal jų vardus.

[v0.3](https://github.com/Astrowski/My-first-project/tree/v.03) - trečia versija
* Sukurtas studentų surūšiavimas pagal pažymius.
* Sukurtas studentų išvedimas į failus.
* Sukurta funkcija leidžianti sugeneruoti atsitiktinius studentų sarašų failus.
* Sukurta laiko testavimo funkcija.

[v0.4](https://github.com/Astrowski/My-first-project/tree/v.04) - ketvirta versija
* Sukurtas studentų išrūšiavimo į 2 skirtingus konteinerius spartos analizės testavimas.
* Sukurtas išimčių valdymas ([Exception Handling](https://www.tutorialspoint.com/cplusplus/cpp_exceptions_handling.htm)).

[v1.0](https://github.com/Astrowski/My-first-project/tree/v1.0) - penkta versija
* Sukurta testavimo funkcija, leidžianti pasirinkti testavimo strategijos būdą.
* Sukurta funkcija, leidžianti palyginti testavimo rezultatus tarp paprasto ir optimizuoto vektoriaus ir listo.

[v1.1](https://github.com/Astrowski/Objektinis2/tree/v1.1) - šešta versija
  * Studentas struktūra pakeista į klasę.
  * Atliktas spartos palyginimas tarp `struct` ir `class`.

[v1.2](https://github.com/Astrowski/Objektinis2/tree/v1.2) - septinta versija
  * Realizuota `rule of three`
