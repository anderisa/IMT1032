#include <iostream>
using namespace std;

class Part {
private:
    int modelnumber;
    int partnumber;
    float price;
public:
    void setPart(int mn, int pn, float p) {
        modelnumber = mn;
        partnumber = pn;
        price = p;
    }
    void changePrice(float newPrice) const {
        price = newPrice;
    }
    void showpart() {
        cout << "Model Number: " << modelnumber << endl;
        cout << "Part Number: " << partnumber << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    Part part1;
    part1.setPart(1337, 373, 199.90F);
    part1.showpart();
    part1.changePrice(249.90F);
    part1.showpart();

    return 0;
}