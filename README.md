# Skaičiuoklė #
Programa leidžainti apskaičiuoti studentų vidurkį ir medianą
# Veikimo principas #
Paleidus programą yra prašoma įvesti duomenis:

* Studento vardą bei pavardę;
* Namų darbų kiekį;
* Namų darbų bei egzamino rezultatus.

> Taip pat programa suteikia galimybę sugeneruoti atsitiktinius namų darbų bei egzamino rezultatus.

# Programos veikimo pavyzdžiai #

# Programos pavyzdys testuojant jos spartą
```
Iveskite studentu skaiciu:
10000
Failo su 10000 studentu/-ais kurimas uztruko: 0.666853 s
Failo su 10000 studentu/-ais nuskaitymas uztruko: 0.332663 s
Failo rusiavimas su 10000 studentais i dvi grupes uztruko : 0.167034 s
Failo isvedimas su 10000 studentais  i vargsiukus uztruko : 0.0780005 s
Failo isvedimas su 10000 studentais  i protingus uztruko : 0.111283 s
```

# Programos veikimas įvedant duomenis iš failo

```
Vardas              Pavarde             Galutinis(vid.)/  Galutinis(med.)
-------------------------------------------------------------------------
Vardas1             Pavarde1            3.88              4.00
Vardas2             Pavarde2            6.15              5.00
Vardas3             Pavarde3            5.59              6.00
Vardas4             Pavarde4            3.19              6.50
Vardas5             Pavarde5            7.29              5.00
Vardas6             Pavarde6            3.65              5.00
Vardas7             Pavarde7            7.83              5.00
Vardas8             Pavarde8            2.89              5.50
Vardas9             Pavarde9            6.89              5.50
Vardas10            Pavarde10           4.19              2.00
```

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
