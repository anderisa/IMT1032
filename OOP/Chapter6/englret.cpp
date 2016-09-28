#include <iostream>
using namespace std;

class Distance {
private:
  int feet;
  float inches;
public:                             //constructor, no arguments
  Distance() : feet(0), inches(0.0F){
                                    //empty function 
  }                                 //constructor with basic arguments
  Distance(int f, float i) : feet(f), inches(i) {
                                    //empty function
  }
  void getDistance() {              //get distance from user
    cout << "Insert feet:   "; cin >> feet;
    cout << "Insert inches: "; cin >> inches;
  }
  void showDistance() {             //display distance
    cout << "Feet: " << feet << "\'-'" << inches << '\"';
  }

  Distance add_dist(Distance);      //add
};
//add this distance to d2, return a sum
Distance Distance::add_dist(Distance d2) {
  Distance temp;                    //temporary variable
  temp.inches = inches + d2.inches; //add the inches
  if(temp.inches >= 12) {           //if total exceeds 12.0
    temp.inches -= 12;              //then decrease inches
    temp.feet += 1;                 //by 12 and increase
  }                                 //feet by 1
  temp.feet += feet + d2.feet;
  return temp;
}

int main() {
  Distance dist1, dist3;            //define two lengths
  Distance dist2(11, 6.25);         //define, initialize dist2

  dist1.getDistance();              //get dist1 from user
  dist3 = dist1.add_dist(dist2);     //dist3 = dist1 + dist2

  //display all lengths
  cout << "\nDist1 = "; dist1.showDistance();
  cout << "\nDist2 = "; dist2.showDistance();
  cout << "'nDist3 = "; dist3.showDistance();
  cout << endl;

  return 0;
}