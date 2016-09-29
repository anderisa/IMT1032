#include <iostream>
using namespace std;

struct Fraction {                       //fraction struct with nominator &
  int numerator, denominator;           //denominator as integers
};

int main() {
  Fraction frac[3];                     //create 3 fraction arrays
  Fraction temp1, temp2, sum;           //temporary holds the fractions
  char choice, operation, choiceToUpper;//holds user choices and math
                                        //operations
  for(int i = 0; i < 3; i++) {       //ask user to enter fraction numerator
    cout << "Fraction " << i+1 << ":" << "\n\tNumerator: ";
    cin >> frac[i].numerator;
    do {                             //ask user to enter fraction denominator
      cout << "\tDenominator(not 0): ";
      cin >> frac[i].denominator;
    }while(frac[i].denominator == 0);//ask again if input is 0 (- ok)
  }//end for loop
                                     //print guidelines
  cout << "\n\nFraction operators:\n" << "\tA - fraction 1 & fraction 2\n"
       << "\tB - fraction 1 & fraction 3\n" << "\tC - fraction 2 & fraction 3\n"
       << "\tQ - end/quit\n\n";
   do {
    cout << "Your choice(A/B/C/Q):\t";//ask user for choice
    cin >> choice;
    choiceToUpper = toupper(choice);  //convert choice to uppercase
  }
  while(choiceToUpper != 'A' && choiceToUpper != 'B' &&
        choiceToUpper != 'C' && choiceToUpper != 'Q');

while(choiceToUpper != 'Q'){

  switch(choiceToUpper) {
    case 'A' : temp1 = frac[0]; temp2 = frac[1]; break;//store fractions in
    case 'B' : temp1 = frac[0]; temp2 = frac[2]; break;//temp for use in
    case 'C' : temp1 = frac[1]; temp2 = frac[2]; break;//calculations without
  }                                                    //tampering with the
                                                       //original values
  do {
    cout << "Desired operation(+, -, *, /):  ";
    cin >> operation;             //only allow +,-,*,/ operators
  }
  while(operation != '+' && operation != '-' &&
        operation != '*' && operation != '/');
    
  switch(operation) {
    case '+': //addition operation
      sum.numerator = (temp1.numerator * temp2.denominator) + 
                       (temp1.denominator * temp2.numerator);
      sum.denominator = (temp1.denominator * temp2.denominator);
    break;//end addition
    case '-': //subtraction operation
      sum.numerator = (temp1.numerator * temp2.denominator) - 
                       (temp1.denominator * temp2.numerator);
      sum.denominator = (temp1.denominator * temp2.denominator);
    break;//end subtracion
    case '*': //multiply operation
      sum.numerator = (temp1.numerator) * (temp2.numerator);
      sum.denominator = (temp1.denominator) * (temp2.denominator);
    break;//end multiply
    case '/': //divide operation
      sum.numerator = (temp1.numerator) * (temp2.denominator);
      sum.denominator = (temp1.denominator) * (temp2.numerator);
    break;//end division
  }//end switch

  cout << "Answer is: " << temp1.numerator << "/" 
           << temp1.denominator << " " <<operation << " "
           << temp2.numerator << "/"
           << temp2.denominator << " = " << sum.numerator << "/"
           << sum.denominator << "\n\n";

  do {
    cout << "Your choice(A/B/C/Q):\t";         //ask user for choice
    cin >> choice;
    choiceToUpper = toupper(choice);           //convert choice to uppercase
  }
  while(choiceToUpper != 'A' && choiceToUpper != 'B' &&
        choiceToUpper != 'C' && choiceToUpper != 'Q');
}
cout << "\nHave a nice day!\n\n";//program exit with nice message
return 0;
}