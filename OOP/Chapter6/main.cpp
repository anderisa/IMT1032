#include <iostream>
using namespace std;

class tollBooth {
private:
	unsigned int carsPassed;
	float moneyCollected;
public:
	tollBooth() : carsPassed(0), moneyCollected(0.0f) {
		//empty member function
	}
	tollBooth(int c, float m) : carsPassed(c), moneyCollected(m) {
		//empty member function
	}
	void payingCar() {
		++carsPassed;
		moneyCollected += 0.50f;
	}
	void nopayCar() {
		++carsPassed;
	}
	void printInfo() const {
		cout << "Total cars:\t " << carsPassed << endl;
		cout << "Total payment: " << moneyCollected << endl;
	}
};

int main() {
	tollBooth tb;
	char userChoice;

	do {
		cout << "Choice(Z, X, C, Q): "; cin >> userChoice;

		switch (toupper(userChoice)) {
		case 'Z': tb.payingCar(); break;
		case 'X': tb.nopayCar(); break;
		case 'C': tb.printInfo(); break;
		case 'Q': break;
		}
	} while (toupper(userChoice) != 'Q');

	return 0;
}