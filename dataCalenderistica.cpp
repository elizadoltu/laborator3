#include <iostream>
using namespace std;

//Sakamoto's method
//Schwerdtfeger's method
int daysWeekDetermination(int year, int month, int day) {

	int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
	if (month < 3)
		year -= 1;
	return (year + year / 4 - year / 100 + year / 400 + t[month - 1] + day) % 7;

}

int main() {

	string days[12] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", 
		"Friday", "Saturday"};

	int day, month, year;
	cout << "Enter the day between 1 to 31: ";
	cin >> day;
	cout << "Enter the month between 1 to 12: ";
	cin >> month;
	cout << "Enter the year: ";
	cin >> year;

	cout << days[daysWeekDetermination(year, month, day)];
	return 0;
}
