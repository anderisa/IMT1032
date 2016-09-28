#include <iostream>
using namespace std;

class Distance {
private:
  int feet;
  float inches;
public:
  Distance() : feet(0), inches(0.0f) {
    //empty class function
  }
  Distance(int f, float i) : feet(f), inches(i) {
    //empty class function
  }

  void getDist() {
    cout << "\nEnter feet:   "; cin >> feet;
    cout << "\nEnter inches: "; cin >> inches;
  }

  void showDist() const {
    cout << feet << "\'-" << inches << '\"';
  }

  Distance add_dist(const Distance&) const;

};

Distance Distance::add_dist(const Distance& d2) const {
  Distance temp;
  temp.inches = inches + d2.inches;
  if(temp.inches >= 12.0) {
    temp.inches -= 12.0;
    temp.feet += 1;
  }
  temp.feet += feet + d2.feet;
  return temp;
}

int main() {
  Distance dist1, dist3;
  Distance dist2(11, 6.25f);

  dist1.getDist;
  dist3 = dist1.add_dist(dist2);

  cout << "\nDist 1 = "; dist1.showDist();
  cout << "\nDist 2 = "; dist2.showDist();
  cout << "\nDist 3 = "; dist3.showDist();
  cout << endl;

  return 0;
}