#include <iostream>
#include <cmath>

using namespace std;

float functie(float numar)
{
    return (numar * numar) / 2 - 4;
}
float solutie(float a, float b)
{
    float m;
    m = (a + b) / 2;
    if (abs(functie(m)) < 0.0001)
        return m;

    if (functie(m) < 0)
        return solutie(m, b);
    else
        return solutie(a, m);
}
int main()
{
    float a, b;
    cout << "Introduceti cele doua capete ale intervalului: ";
    cin >> a >> b;
    cout << solutie(a, b) << " " << "este valoarea pentru care functia se intersecteaza cu ox";

    return 0;
}
