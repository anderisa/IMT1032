#include <iostream>
#include <string>
using namespace std;

enum ConservationStatus {
    EX, EW, CR, EN, VU, NT, LC, DD, NE;
}

class Animal {
private:
    std::string kingdom;
    std::string family;
protected:
    std::string name;
    ConservationStatus conStat;
public:
    Animal() : kingdom("NULL"), family("NULL"), name("NO_NAME"), conStat(NE) { }
    Animal(std::string k, std::string f, std::string n, ConservationStatus c) : kingdom(k), family(f), name(n), conStat(c) { }

    void printData() {
        cout << "Kingdom: " << kingdom << endl;
        cout << "Family: " << family << endl;
        cout << "Name: " << name << endl;
        cout << "Conservation Status: " << conStat << endl;
    }
};

class AnimalType : public Animal {
public:
    void changeName(std::string newName) {
        name = newName;
        cout << "New name: " << newName << endl;
    }
    void changeConStat(std::string newStat) {
        conStat = newConStat;
        cout << "Conservation Status: " << newConStat << endl;
    }
}