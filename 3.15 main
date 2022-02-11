#include<iostream>
#include<string>
#include"HeartRates.h"
using namespace std;

int main() {
	string first, last;
	int month, day, year, cYear, cDay, cMonth;
	cout << "Please enter your first name: ";
	cin >> first;
	cout << "Please enter your last name: ";
	cin >> last;
	cout << "Please enter your Date of birth | mm dd yyyy: ";
	cin >> month >> day >> year;
	cout << "please enter the current date| mm dd yyyy: ";
	cin >> cMonth >> cDay >> cYear;

	HeartRates Ian(first, last, month, day, year);
	Ian.setcYear(cYear);
	Ian.setcDay(cDay);
	Ian.setcMonth(cMonth);
	cout << Ian.getfName() << " " << Ian.getlName() << endl;
	cout << "DOB: " << Ian.getbMonth() << "/" << Ian.getbDay() << "/" << Ian.getbYear() << endl;
	cout << "Age: " << Ian.calcAge() << endl;
	cout << "Max Heart Rate " << Ian.maxRate() << endl;
	cout << "Target Heart Rate: ";
	Ian.targerHR(); 
}
