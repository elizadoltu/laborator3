#include <iostream>
#include <cmath>
#define minDifference 0.000000001
using namespace std;

double calculRadacina(double numar) {

    double radacina1 = 1.0;
    double radacina2 = 1.0 / 2.0 * (radacina1 + numar / radacina1);

    while (abs((radacina1 - radacina2)) > minDifference) {
        radacina1 = radacina2;
        radacina2 = 1.0 / 2.0 * (radacina1 + numar / radacina1);
    }
    return radacina2;
}

int main() {

    double number;
    cin >> number;
    cout << (calculRadacina(number));
    return 0;
}
