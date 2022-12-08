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
Bendras failo Studentai_1000.txt testavimo laikas: 0.05sekundes

Failas Studentai_10000.txt
Studentu rusiavimas i dvi grupes uztruko: 0.005 s.
Bendras failo Studentai_10000.txt testavimo laikas: 0.34sekundes

Failas Studentai_100000.txt
Studentu rusiavimas i dvi grupes uztruko: 0.061 s.
Bendras failo Studentai_100000.txt testavimo laikas: 3.435sekundes

Failas Studentai_1000000.txt
Studentu rusiavimas i dvi grupes uztruko: 0.794 s.
Bendras failo Studentai_1000000.txt testavimo laikas: 34.608sekundes

----------------------------- Pradedamas testavimas naudojant list: ---------------------------------------------

Failas Studentai_1000.txt
Studentu rusiavimas i dvi grupes uztruko: 0 s.
Bendras failo Studentai_1000.txt testavimo laikas: 0.042 s.

Failas Studentai_10000.txt
Studentu rusiavimas i dvi grupes uztruko: 0.002 s.
Bendras failo Studentai_10000.txt testavimo laikas: 0.366 s.

Failas Studentai_100000.txt
Studentu rusiavimas i dvi grupes uztruko: 0.03 s.
Bendras failo Studentai_100000.txt testavimo laikas: 3.402 s.

Failas Studentai_1000000.txt
Studentu rusiavimas i dvi grupes uztruko: 0.402 s.
Bendras failo Studentai_1000000.txt testavimo laikas: 35.294 s.
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
Bendras failo Studentai_1000.txt testavimo laikas: 0.039sekundes

Failas Studentai_10000.txt
Studentu rusiavimas i dvi grupes uztruko: 0.001 s.
Bendras failo Studentai_10000.txt testavimo laikas: 0.261sekundes

Failas Studentai_100000.txt
Studentu rusiavimas i dvi grupes uztruko: 0.02 s.
Bendras failo Studentai_100000.txt testavimo laikas: 3.312sekundes

Failas Studentai_1000000.txt
Studentu rusiavimas i dvi grupes uztruko: 0.27 s.
Bendras failo Studentai_1000000.txt testavimo laikas: 27.727sekundes

----------------------------- Pradedamas testavimas naudojant list: ---------------------------------------------

Failas Studentai_1000.txt
Studentu rusiavimas i dvi grupes uztruko: 0 s.
Bendras failo Studentai_1000.txt testavimo laikas: 0.048 s.

Failas Studentai_10000.txt
Studentu rusiavimas i dvi grupes uztruko: 0.002 s.
Bendras failo Studentai_10000.txt testavimo laikas: 0.272 s.

Failas Studentai_100000.txt
Studentu rusiavimas i dvi grupes uztruko: 0.033 s.
Bendras failo Studentai_100000.txt testavimo laikas: 2.768 s.

Failas Studentai_1000000.txt
Studentu rusiavimas i dvi grupes uztruko: 0.433 s.
Bendras failo Studentai_1000000.txt testavimo laikas: 27.876 s.
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
Bendras failo Studentai_1000.txt testavimo laikas: 0.035sekundes

Failas Studentai_10000.txt
Studentu rusiavimas i dvi grupes uztruko: 0.002 s.
Bendras failo Studentai_10000.txt testavimo laikas: 0.264sekundes

Failas Studentai_100000.txt
Studentu rusiavimas i dvi grupes uztruko: 0.024 s.
Bendras failo Studentai_100000.txt testavimo laikas: 2.685sekundes

Failas Studentai_1000000.txt
Studentu rusiavimas i dvi grupes uztruko: 0.266 s.
Bendras failo Studentai_1000000.txt testavimo laikas: 27.525sekundes

--------------------------- Pradedamas testavimas naudojant optimizuota vector: -----------------------------------

Failas Studentai_1000.txt
Studentu rusiavimas i dvi grupes uztruko: 0 s.
Bendras failo Studentai_1000.txt testavimo laikas: 0.054sekundes

Failas Studentai_10000.txt
Studentu rusiavimas i dvi grupes uztruko: 0.003 s.
Bendras failo Studentai_10000.txt testavimo laikas: 0.336sekundes

Failas Studentai_100000.txt
Studentu rusiavimas i dvi grupes uztruko: 0.028 s.
Bendras failo Studentai_100000.txt testavimo laikas: 3.341sekundes

Failas Studentai_1000000.txt
Studentu rusiavimas i dvi grupes uztruko: 0.333 s.
Bendras failo Studentai_1000000.txt testavimo laikas: 32.402sekundes
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

[v1.5](https://github.com/Astrowski/Objektinis2/tree/v1.5)
  * Pridėta abstrakti bazinė klasė `Person`.
  * `Studentas` klasė pertvarkyta į išvestinę (derived) `Person` klasę.
