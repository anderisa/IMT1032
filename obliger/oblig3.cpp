#include <iostream>
using namespace std;

struct Fraction {       //fraction struct with numerator
    int numerator;      //and denominator as integers
    int denominator;
};

int main() {
    Fraction frac[3];      //create three fraction arrays
    Fraction temp1, temp2; //temporarely holds the fractions
                           //for use in math operation
    Fraction sum;          //holds the calculated sum of frations
    char userChioce;       //holds user choices
    char operation;        //holds operation choices

    for(int i = 0; i < 3; i++) { //create 3 fractions for each i
        cout << "Fraction " << i+1 << ": ";
        cout << "\n\tNumerator: ";
        cin >> frac[i].numerator;
        do {
            cout << "\tDenominator(not 0): ";//ask for new denominator
            cin >> frac[i].denominator;      //if provided denominator is 0
        }
        while(frac[i].denominator == 0);
    }
    //print guidelines
    cout << "\n\nFraction operators:\n" << "\tA - fraction 1 & fraction 2\n"
    << "\tB - fraction 1 & fraction 3\n" << "\tC - fraction 2 & fraction 3\n"
    << "\tQ - end/quit\n\n";

    do {
        do {
            cout << "Your choice(A, B, C, Q):\t";    //ask user for A,B,C,Q
            cin >> userChioce;
            //userChioce.toUpper(); legal?
        }
        while(userChioce != 'a' && userChioce != 'A' &&
            userChioce != 'b' && userChioce != 'B' &&
            userChioce != 'c' && userChioce != 'C' &&
            userChioce != 'q' && userChioce != 'Q'); //loop while user input
                                                     //is illegal
        if(userChioce == 'a' || userChioce == 'A') {
            temp1 = frac[0];                        //fraction temp1 = fraction1
            temp2 = frac[1];                        //fraction temp2 = fraction2
        }
        else if(userChioce == 'b' || userChioce == 'B') {
            temp1 = frac[0];                        //fraction temp1 = fraction1
            temp2 = frac[2];                        //fraction temp2 = fraction3
        }
        else if(userChioce == 'c' || userChioce == 'C') {
            temp1 = frac[1];                        //fraction temp1 = fraction2
            temp2 = frac[2];                        //fraction temp2 = fraction3
        }
        if(userChioce != 'q' && userChioce != 'Q') {        //check if user
            do {                                            //has entered q/Q
                cout << "Desired operation(+, -, *, /):  "; //ask user for
                cin >> operation;                           //operation
            }
            while(operation != '+' && operation != '-' && //loop if operation
                operation != '*' && operation != '/');    //is illegal

            switch(operation) {
                case '+': // addition operation
                    sum.numerator = (temp1.numerator * temp2.denominator) + 
                                    (temp1.denominator * temp2.numerator);
                    sum.denominator = (temp1.denominator * temp2.denominator);
                    cout << "Answer is: " << temp1.numerator << "/" 
                        << temp1.denominator << " + " << temp2.numerator << "/"
                        << temp2.denominator << " = " << sum.numerator << "/"
                        << sum.denominator << "\n\n";
                    break;//end addition
                case '-': // subtraction operation
                    sum.numerator = (temp1.numerator * temp2.denominator) - 
                                    (temp1.denominator * temp2.numerator);
                    sum.denominator = (temp1.denominator * temp2.denominator);
                    cout << "Answer is: " << temp1.numerator << "/" 
                        << temp1.denominator << " - " << temp2.numerator << "/"
                        << temp2.denominator << " = " << sum.numerator << "/"
                        << sum.denominator << "\n\n";
                    break;//end subtracion
                case '*': // multiply operation
                    sum.numerator = (temp1.numerator) * (temp2.numerator);
                    sum.denominator = (temp1.denominator) * (temp2.denominator);
                    cout << "Answer is: " << temp1.numerator << "/" 
                        << temp1.denominator << " * " << temp2.numerator << "/"
                        << temp2.denominator << " = " << sum.numerator << "/"
                        << sum.denominator << "\n\n";
                    break;//end multiply
                case '/': // divide operation
                    sum.numerator = (temp1.numerator) * (temp2.denominator);
                    sum.denominator = (temp1.denominator) * (temp2.numerator);
                    cout << "Answer is: " << temp1.numerator << "/" 
                        << temp1.denominator << " / " << temp2.numerator << "/"
                        << temp2.denominator << " = " << sum.numerator << "/"
                        << sum.denominator << "\n\n";
                    break;//end division
            }
        cout << "\n"; //print some new lines
        }
    }
    while(userChioce != 'q' && userChioce != 'Q');//loop while input != q/Q

    cout << "\nProgram finished(Code 0).\n\n\n";//exit message
    return 0;
}