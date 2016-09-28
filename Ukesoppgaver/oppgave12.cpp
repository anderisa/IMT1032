#include <iostream>
using namespace std;

int main() {
    static int range;
    static int num;
    char userInput;

    do {
        range += 20;

        for(int i = (range - 20); i < range; i++) {
            do {
                num++;
            }
            while(num % 2 == 0);
            cout << i+1 << ": " << num << endl;
        }
        cout << "More numbers?(y/N): ";
        cin >> userInput;
    }
    while(userInput != 'n' && userInput != 'N');

}