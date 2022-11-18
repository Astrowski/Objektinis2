# Skaičiuoklė #
Programa leidžainti apskaičiuoti studentų vidurkį ir medianą
# Veikimo principas #
Paleidus programą yra prašoma įvesti duomenis:

* Studento vardą bei pavardę;
* Namų darbų kiekį;
* Namų darbų bei egzamino rezultatus.

> Taip pat programa suteikia galimybę sugeneruoti atsitiktinius namų darbų bei egzamino rezultatus.

# Spartos analizė #

Kompiuterio specifikacijos:
* Procesorius:	Intel Core i7-7700HQ CPU @ 2.80GHz
* Fizinė atmintis: 16 GB RAM
* 560 GB SSD

### Duomenų nuskaitymas ###

Container |   1000  |  10000  |
----------|---------|---------|
Vector    | 0.135s. | 1.413s. |
List      | 0.012s. | 1.293s. |

### Duomenų grupavimas ###

Container |   1000  |  10000  |
----------|---------|---------|
Vector    | 0.764s. | 95.94s. |
List      | 0.007s. | 0.080s. |

# Releases #
[v0.1](https://github.com/Astrowski/My-first-project/tree/v.01) - pirminė versija

[v0.2](https://github.com/Astrowski/My-first-project/tree/v.02) - antra versija
* Pridėtas duomenų skaitymas iš failo
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
