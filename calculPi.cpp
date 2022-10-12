#include <iostream>
#define minDifference 3.14159265359
#define MAX_COUNT 400000
using namespace std;


double calculFormulaPi() {

	double calculPi = 0.0;
	double numitor = 1.0;

	for (int index = 1; index <= MAX_COUNT; ++index){
		
		if (index % 2 == 0) calculPi -= (4.0 / numitor);
		else calculPi += (4.0 / numitor);
 
		numitor += 2.0;
	} 
	return calculPi;
}

int main() {

	cout << calculFormulaPi();
	return 0;
}
