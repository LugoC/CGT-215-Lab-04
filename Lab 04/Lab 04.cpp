#include <iostream>
using namespace std;
// Print out the menu of choices for the user to select from
void printMenu() {
	cout << "Please Select which operation to perform:" << endl;
	cout << "\t1. Factorial" << endl;
	cout << "\t2. Arithmetic Series" << endl;
	cout << "\t3. Geometric Series" << endl;
	cout << "\t4. Exit" << endl;
	cout << "Your Selection: ";
}
void factorial() {
	int A;
	int B;
	int C;
	cout << "Factorial:" << endl;
	cout << "Enter a number: ";
	cin >> A;
	while (A < 0) {
		cout << "Nice try, please enter a POSITIVE number... : ";
		cin >> A;
	}
	C = A;
	B = A;
	cout << A << "! = ";
	for (int x(A); x > 1; x--) {
		std::cout << x << " * ";
		C -= 1;
		B *= C;
	}
	cout << "1 = " << B << endl;

}
void arithmetic() {
	int A;
	int B;
	int C;
	int D;
	int E;
	cout << "Arithmetic:" << endl;
	cout << "Enter a number to start at: ";
	cin >> A;
	cout << "Enter a number to add each time: ";
	cin >> B;
	cout << "Enter the number of elements in the series: ";
	cin >> C;
	while (C < 0) {
		cout << "Nice try, please enter a POSITIVE number... : ";
		cin >> C;
	}
	D = A;
	E = A;
	cout << A << " + ";
	for (int x = 2; x <= C; x++){
		D += B;
		E += D;
		if (x < C) {
			cout << D << " + ";
		}
		if (x >= C) {
			cout << D;
		}
	}
		cout << " = " << E << endl;
}
void geometric() {
	int A;
	int B;
	int C;
	int D;
	int E;
	cout << "Geometric:" << endl;
	cout << "Enter a number to start at: ";
	cin >> A;
	cout << "Enter a number to multiply by each time: ";
	cin >> B;
	cout << "Enter the number of elements in the series: ";
	cin >> C;
	while (C < 0) {
		cout << "Nice try, please enter a POSITIVE number... : ";
		cin >> C;
	}
	D = A;
	E = A;
	cout << A << " * ";
	for (int x = 2; x <= C; x++) {
		D *= B;
		E += D;
		if (x < C) {
			cout << D << " + ";
		}
		if (x >= C) {
			cout << D;
		}
	}
	cout << " = " << E << endl;
}
int main() {
	int choice;
	char again;

	do {
		printMenu();
		cin >> choice;
		// Quit if user chooses to exit (or any invalid choice)
		if (choice > 3 || choice < 1) {
			return 0;
		}
		else if (choice == 1) {
			factorial();
		}
		else if (choice == 2) {
			arithmetic();
		}
		else if (choice == 3) {
			geometric();
		}
		cout << "Go Again? [Y/N] ";
		cin >> again;
	} while (again == 'y' || again == 'Y');
}