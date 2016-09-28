/*
    This program plays the game NIM against the computer.
*/

#include <iostream>
using namespace std;

void printRules();

int main() {
    int totalSticks = 25;
    int userPulled = 0;
    bool gameOver = true;
    char repeat;

    cout << "Velkommen til NIM!" << "\n";
    printRules();
    do {
        gameOver = false;

        do {

            do {

                if(totalSticks > 1) {

                    std::cout << "Hvor mange pinner ønsker du å fjenre?(1 - 3): ";
                    std::cin >> userPulled;

                    switch(userPulled) {
                        case 1:
                            totalSticks -= 1;
                            std::cout << "\nDu fjernet 1 pinne fra brettet.\n";
                            std::cout << "Det er " << totalSticks << " pinner(r) igjen på brettet.\n\n";
                            break;
                        case 2:
                            totalSticks -= 2;
                            std::cout << "\nDu fjernet 2 pinner fra brettet.\n";
                            std::cout << "Det er " << totalSticks << " pinner(r) igjen på brettet.\n\n";
                            break;
                        case 3:
                            totalSticks -= 3;
                            std::cout << "\nDu fjernet 3 pinner fra brettet.\n";
                            std::cout << "Det er " << totalSticks << " pinner(r) igjen på brettet.\n\n";
                            break;
                        default:
                            std::cout << "Vennligst gjør et lovlig trekk!\n";
                    } //end user switch

                } //end if statement
                else {
                    cout << "Det er " << totalSticks << " igjen. Du har tapt!\n";
                    gameOver = true;
                } //end else
            } //check legal moves
            while(userPulled > 4 || userPulled < 1 || userPulled > totalSticks);

            if(totalSticks > 1) {

                cout << "Maskinens tur.\n\n";
                switch(userPulled) {
                    case 1:
                        totalSticks -= 3;
                        cout << "Maskinen fjernet 3 pinner fra brettet.\n";
                        cout << "Det er " << totalSticks << " pinne(r) igjen på brettet.\n\n";
                        break;
                    case 2:
                        totalSticks -= 2;
                        cout << "Maskinen fjernet 2 pinner fra brettet.\n";
                        cout << "Det er " << totalSticks << " pinne(r) igjen på brettet.\n\n";
                        break;
                    case 3:
                        totalSticks -= 1;
                        cout << "Maskinen fjernet 1 pinne fra brettet.\n";
                        cout << "Det er " << totalSticks << " pinne(r) igjen på brettet.\n\n";
                        break;
                } //end machine switch
            }
            else {
                cout << "Du har vunnet!\n\n";
                gameOver = true;
            }
        } //check gameover
        while(gameOver != true);

        do {
            cout << "Spille igjen?(j/N): ";
            cin >> repeat;
        } //ask if user wants to play again
        while(repeat != 'j' && repeat != 'J');
    }//run as long as input is not equal to n or N
    while(repeat != 'n' && repeat != 'N');

    return 0;

}

void printRules() { //print the game rules
    cout << "\nRegler: " << endl;
    cout << "To spillere trekker pinner etter tur, 1 - 3 pinner hver gang. ";
    cout << "Den spilleren som blir tvunget til å ta den siste pinnen har tapt. ";
    cout << "Dette programmet lar brukeren trekke først. Du kan vise disse reglene igjen ";
    cout << "ved å trykke \'r/R\'\n\n";
}