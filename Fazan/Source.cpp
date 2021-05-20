
#include <iostream>
#include <string>
#include <ctime>
#include <windows.h>
using namespace std;


int scor1 = 0, scor2 = 0;
bool ok = 1;
char litera= 'a' + rand() % 26;
	string jucator1,jucator2,litere1,litere2;

void fazan() {
	srand(time(0));
	litera = 'a' + rand() % 26;

	if (scor1 == 0) { cout << endl << " Ai pierdut, esti F! " << endl; scor1++; }
	else if (scor1 == 1) { cout <<endl<< " Ai pierdut, esti FA! " << endl; scor1++; }
	else if (scor1 == 2) { cout << endl << " Ai pierdut, esti FAZ! " << endl; scor1++; }
	else if (scor1 == 3) { cout << endl << " Ai pierdut, esti FAZA! " << endl; scor1++; }
	else if (scor1 == 4) { cout << endl << " Ai pierdut, esti FAZAN! " << endl; scor1++; ok = 0; Sleep(2000); }

	if (ok == 1) {
		cout << endl << "Litera de inceput este... a b c ... " << endl;
		Sleep(3000);
		cout<<"STOP! Litera este " << litera << endl;
		cout << "Jucatorul 2 cuvantul care incepe cu litera " << litera << " este .." << endl;
		cin >> jucator2;
	}

}

void fazan2() {

	if (scor2 == 0) { cout << endl << " Ai pierdut, esti F! " << endl; scor2++; }
	else if (scor2 == 1) { cout << endl << " Ai pierdut, esti FA! " << endl; scor2++; }
	else if (scor2 == 2) { cout << endl << " Ai pierdut, esti FAZ! " << endl; scor2++; }
	else if (scor2 == 3) { cout << endl << " Ai pierdut, esti FAZA! " << endl; scor2++; }
	else if (scor2 == 4) { cout << endl << " Ai pierdut, esti FAZAN! " << endl; scor2++; ok = 0; Sleep(2000); }

	cout << endl << "Litera de inceput este... a b c ... STOP! Litera este " << litera << endl;
	cout << "Jucatorul 1 cuvantul care incepe cu litera " << litera << " este .." << endl;
	cin >> jucator1;

}

void main() {


	cout << endl << "---------------------------------" << endl;
	cout << "Project made by Emanuel Butoi" << endl;
	cout << "---------------------------------" << endl << endl;

	cout << "Bine ai venit, haide sa jucam Fazan"<<endl;
	cout << endl << "Litera de inceput este... a b c ... " << endl;
	Sleep(3000);
	cout << "STOP! Litera este " << litera << endl;
	cout << "Jucatorul 1 cuvantul care incepe cu litera " << litera << " este .." << endl;
	cin >> jucator1;


	while (ok) {

		if (ok == 1) {
			litere1 = jucator1.substr(jucator1.length() - 2);
			cout << "Jucatorul 2 spune un cuvant care incepe cu literele " << litere1 << endl;
			cin >> jucator2;
			if (litere1 != jucator2.substr(0, 2)) {
				fazan();
			}
		}


		if (ok == 1) {
			litere2 = jucator2.substr(jucator2.length() - 2);
			cout << "Jucatorul 1 spune un cuvant care incepe cu literele " << litere2 << endl;
			cin >> jucator1;
			if (litere2 != jucator1.substr(0, 2)) {
				fazan2();
			}
		}

	}



}

