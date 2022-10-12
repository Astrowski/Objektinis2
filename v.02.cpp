#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <iterator>
#include "skaitykDuomenis.h"
#include "spausdinkDuomenis.h"

int main()
{
    int n; // pazymiu skaicius
    int temp;
    std::vector<duomenys> A;
    skaitykDuomenis(A, &n);
    if (A.empty())
        return 0;
    spausdinkDuomenis(A, n);
    system("pause");
    return 0;
}