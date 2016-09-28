#include <iostream>
using namespace std;

class Distance {
private:
  int feet;
  float inches;
public:
  Distance() : feet(0), inches(0.0f) {
    //empty class functino
  }
  Distance(int f, float i) : feet(f), inches(i) {
    //empty class function
  }

  void getDistance() {
    cout << "\nEnter feet: "; cin >> feet;
    cout << "Enter inches: "; cin >> inches;
  }

  void showDistance() const {
    cout << "Feet: " << feet << "\'-'" << inches << '\"';
  }
};

int main() {
  const Distance football(300, 0.0f);
  //football.getDistance(); is not possible! not a const function
  cout << "football: "; football.showDistance();
  cout << endl;

  return 0;
}